/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once
#include <string>
#include <sstream>
#include <mutex>

class StringBuffer
{
public:
    /// <summary>
    /// Basic constructor.
    /// </summary>
    StringBuffer(int bufferSize);
	~StringBuffer()
	{
		delete[] buffers;
	};
	/// <summary>
	/// Adds the given buffer to this string buffer.
	/// It is assumed that the buffer given is the same size as the bufferSize that
	/// was given in the constructor.
	/// </summary>
	void addBuffer(char* buffer);
    /// <summary>
    /// Will read the next char in the buffer.
	/// There is no check in place to see if we still have data left,
	/// it is assumed you do that yourself.
	/// In our stringstream inplementation that is the case.
    /// </summary>
    char readNextChar();

private:
    char **buffers;
	int bufferSize;
    int currentIndex = 0;
    int bufferIndex = 0;
	int bufferAmount;
    int bufferCap;
};

class StringStream
{
public:
	/// Constructor	
	StringStream(int bufferSize);

	/// <summary>
	/// Insert char* into Stringstream
	/// </summary>
	/// <param name="buffer">Char* to enter into Stringstream</param>
	/// <param name="size">The amount of character to read</param>
	void addBuffer(char* buffer, int size);

	/// <summary>
	/// Removes the next character from the stream and returns it
	/// </summary>
	/// <returns>The next character of the stream</returns>
	virtual char nextChar();

	/// <summary>
	/// Returns whether the Stringstream is busy or full
	/// </summary>
	/// <returns>Only true if the Stringstream is empty and done receiving data</returns>
	virtual bool stop();

	/// <summary>
	/// Set whether the input of the Stringstream has ended
	/// </summary>
	/// <param name="b">True if the input has ended, false otherwise</param>
	void setInputEnded(bool b);
private:
	StringBuffer* writeStream;
	StringBuffer* readStream;
	bool dataEnded = false;
	std::mutex lock;
	int sizeWrite = 0;
	int sizeRead = 0;
    int buffersSize;
};
