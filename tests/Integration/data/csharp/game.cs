#define ONEBIT
//#define TILED

using System;
using Cloo;
using System.IO;
using System.Diagnostics;
using OpenTK;
using OpenTK.Graphics;
using OpenTK.Graphics.OpenGL;
using OpenTK.Input;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using GameOfLife.Template;

namespace Template
{
    class Game
    {
        const int LOCAL_SIZE = 8;

        const float MIN_SCALE = 0.05f;
        const float MAX_SCALE = 16.0f;

        // when GLInterop is set to true, the fractal is rendered directly to an OpenGL texture
        bool GLInterop = true;
        // load the OpenCL program; this creates the OpenCL context
        static OpenCLProgram ocl = new OpenCLProgram("../../program.cl");

        //this kernel does the actual Game of life simulation
        OpenCLKernel kernel = new OpenCLKernel(ocl, "execute_gol");

        //this kernel swaps the old and new buffer
        OpenCLKernel kernelSwapBuffer = new OpenCLKernel(ocl, "swap_buffer");

        //this kernel draws the image to be used by openCL
        OpenCLKernel kernelDrawImage = new OpenCLKernel(ocl, "draw_image");

        // create an OpenGL texture to which OpenCL can send data
        OpenCLImage<int> image;

        // create two buffers, one to read, one to write
        OpenCLBuffer<uint> world;
        OpenCLBuffer<uint> world2;

        // screen surface to draw to
        public Surface screen;
        // stopwatch
        Stopwatch timer = new Stopwatch();

        int generation = 0;

        uint pw, pwFull, ph;    //width and height of the world, pwFull indicates the true width when using onebit per cell

        //different get and set methods for single bit per cell and full int per cell
#if ONEBIT
        void BitSet(uint x, uint y) { world[(int)(y * pw + (x >> 5))] |= 1U << (int)(x & 31); }
#else
        void BitSet( uint x, uint y ) { world[(int)y * (int)pw + (int)x] = 1; }
#endif

        // helper function for getting one bit from the secondary pattern buffer
#if ONEBIT
        uint GetBit(uint x, uint y) { return (world2[(int)(y * pw + (x >> 5))] >> (int)(x & 31)) & 1U; }
#else
        uint GetBit(uint x, uint y) { return world2[(int)y * (int)pw + (int)x]; }
#endif

        // mouse handling: dragging functionality and zoom
        int xoffset = 0, yoffset = 0;
        float zoom = 1.0f;
        float scroll = 0.0f;
        bool lastLButtonState = false;
        int dragXStart, dragYStart, offsetXStart, offsetYStart;

        public void SetMouseState( int x, int y, bool pressed )
        {
            if (pressed)
            {
                if (lastLButtonState)
                {
                    int deltax = x - dragXStart, deltay = y - dragYStart;
                    xoffset = (int)Math.Min( pwFull, Math.Max( 0, offsetXStart - deltax / zoom ) );
                    yoffset = (int)Math.Min( ph, Math.Max( 0, offsetYStart - deltay / zoom ) );
                }
                else
                {
                    dragXStart = x;
                    dragYStart = y;
                    offsetXStart = (int)xoffset;
                    offsetYStart = (int)yoffset;
                    lastLButtonState = true;
                }
            }
            else lastLButtonState = false;
        }

        public void SetScroll(float scrollValue)
        {
            if (scroll == 0.0f)
                scroll = scrollValue;
            else
            {
                float change = scrollValue - scroll;
                zoom *= (float)Math.Pow(2, change * 0.1f);

                if (zoom > MAX_SCALE)
                    zoom = MAX_SCALE;
                else if( zoom < MIN_SCALE)
                    zoom = MIN_SCALE;

                scroll = scrollValue;
            }                
        }

        // minimalistic .rle file reader for Golly files (see http://golly.sourceforge.net)
        public void Init()
        {
            StreamReader sr = new StreamReader("../../data/turing_js_r.rle");
            uint state = 0, n = 0, x = 0, y = 0;
            while (true)
            {
                String line = sr.ReadLine();
                if (line == null) break; // end of file
                int pos = 0;
                if (line[pos] == '#') continue; else if (line[pos] == 'x') // header
                {
                    String[] sub = line.Split( new char[] { '=',',' }, StringSplitOptions.RemoveEmptyEntries );

                    pwFull = uint.Parse(sub[1]) + 5;    //add a buffer to width and height to get rid of wraparound causing cells to die
#if ONEBIT  //when using single bit per cell, calculate special width
                    pw = (uint.Parse(sub[1]) + 5 + 31) / 32;
#else
                    pw = pwFull;
#endif
                    ph = uint.Parse(sub[3]) + 5;
#if TILED   //when using tiled method, make sure the size is divisible by the tile size
                    pwFull = pwFull + LOCAL_SIZE - (pwFull % LOCAL_SIZE);
                    ph = ph + LOCAL_SIZE - (ph % LOCAL_SIZE);
#endif
                    world = new OpenCLBuffer<uint>(ocl, (int)(pw * ph));
                    world2 = new OpenCLBuffer<uint>(ocl, (int)(pw * ph));
                    image = new OpenCLImage<int>(ocl, screen.width, screen.height);
                }
                else while (pos < line.Length)
                {
                    Char c = line[pos++];
                    if (state == 0) if (c < '0' || c > '9') { state = 1; n = Math.Max( n, 1 ); } else n = (uint)(n * 10 + (c - '0'));
                    if (state == 1) // expect other character
                    {
                            if (c == '$') { y += n; x = 0; } // newline
                            else if (c == 'o') for (int i = 0; i < n; i++) BitSet( x++, y ); else if (c == 'b') x += n;
                        state = n = 0;
                    }
                }
            }

            //copy the starting state to the gpu
            world.CopyToDevice();

            //set all arguments for the kernels that won't change during execution
            kernel.SetArgument(0, world);
            kernel.SetArgument(1, world2);
            kernel.SetArgument(2, pwFull);
            kernel.SetArgument(3, ph);
            kernel.kernel.SetLocalArgument(4, 32 * 8 * 8);

            kernelSwapBuffer.SetArgument(0, world);
            kernelSwapBuffer.SetArgument(1, world2);
            kernelSwapBuffer.SetArgument(2, pw);

            kernelDrawImage.SetArgument(0, image);
            kernelDrawImage.SetArgument(1, world);
            kernelDrawImage.SetArgument(2, pwFull);
            kernelDrawImage.SetArgument(3, ph);
            kernelDrawImage.SetArgument(4, xoffset);
            kernelDrawImage.SetArgument(5, yoffset);
            kernelDrawImage.SetArgument(6, zoom);
        }

        // TICK
        // Main application entry point: the template calls this function once per frame.
        public void Tick()
        {
            // start timer
            timer.Restart();                      
            
            GL.Finish();

            // clear the screen
            screen.Clear(0);

            //set userinput
            kernelDrawImage.SetArgument(4, xoffset);
            kernelDrawImage.SetArgument(5, yoffset);
            kernelDrawImage.SetArgument(6, zoom);

            // set correct work/local sizes for all kernels
#if TILED
            long[] workSize = { (long)Math.Ceiling(Math.Ceiling((double)((int)pwFull / (LOCAL_SIZE - 2))) * (LOCAL_SIZE - 2) / LOCAL_SIZE) * LOCAL_SIZE + LOCAL_SIZE, (long)Math.Ceiling(Math.Ceiling((double)((int)ph / (LOCAL_SIZE - 2))) * (LOCAL_SIZE - 2) / LOCAL_SIZE) * LOCAL_SIZE + LOCAL_SIZE };
#else
            long[] workSize = { pwFull, ph };
#endif
            long[] localSize = { LOCAL_SIZE, LOCAL_SIZE };

            long[] workSizeDrawImage = { screen.height, screen.width };

            long[] workSizeSwapKernel = { pw, ph };

            // if the tiling method isn't used, having the system decide it's own localsize is faster
#if TILED
            kernel.Execute(workSize, localSize);
#else
                kernel.Execute(workSize);
#endif

            if (GLInterop) 
            {
                // INTEROP PATH:
                // Use OpenCL to fill an OpenGL texture; this will be used in the
                // Render method to draw a screen filling quad. This is the fastest
                // option, but interop may not be available on older systems.  

                // lock the OpenGL texture for use by OpenCL
                kernelDrawImage.LockOpenGLObject(image.texBuffer);
                // draw image
                kernelDrawImage.Execute(workSizeDrawImage);
                // unlock texture
                kernelDrawImage.UnlockOpenGLObject(image.texBuffer);
                
                //swap the old and new buffer
                kernelSwapBuffer.Execute(workSizeSwapKernel);

                Console.WriteLine("generation " + generation++ + ": " + timer.ElapsedMilliseconds+ "ms");

            }
            else
            {
                // NO INTEROP PATH:
                // Use OpenCL to fill a C# pixel array, encapsulated in an
                // OpenCLBuffer<uint> object (buffer). After filling the buffer, it
                // is copied to the screen surface, so the template code can show
                // it in the window.

                //read new state
                world2.CopyFromDevice();

                //swap buffers
                kernelSwapBuffer.Execute(workSizeSwapKernel);

                // report performance
                Console.WriteLine("generation " + generation++ + ": " + timer.ElapsedMilliseconds + "ms");
                
                // plot pixels using the data on the host
                for (int y = 0; y < 512 && y / zoom + yoffset < ph; y++) for (int x = 0; x < 512 && x / zoom + xoffset < pwFull; x++)
                {
                    screen.pixels[x + y * screen.width] = (int)GetBit((uint)(x / zoom) + (uint)xoffset, (uint)(y / zoom) + (uint)yoffset) * 100000;                        
                }
            }
        }

        public void Render()
        {
            // use OpenGL to draw a quad using the texture that was filled by OpenCL
            if (GLInterop)
            {
                GL.LoadIdentity();
                GL.BindTexture(TextureTarget.Texture2D, image.OpenGLTextureID);

                
                GL.Begin(PrimitiveType.Quads);
                GL.TexCoord2(0.0f, 1.0f); GL.Vertex2(-1.0f, -1.0f);
                GL.TexCoord2(1.0f, 1.0f); GL.Vertex2(1.0f, -1.0f);
                GL.TexCoord2(1.0f, 0.0f); GL.Vertex2(1.0f, 1.0f);
                GL.TexCoord2(0.0f, 0.0f); GL.Vertex2(-1.0f, 1.0f);

                GL.End();
            }
        }
    } // class Game
} // namespace Template

