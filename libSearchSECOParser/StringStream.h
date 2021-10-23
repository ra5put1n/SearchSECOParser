/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once

#include <mutex>

#define SEARCHSECOPARSER_STRINGSTREAM_INITIAL_STRINGBUFFER_SIZE 10

class StringBuffer
{
public:
	/// <summary>
	/// Basic constructor.
	/// </summary>
	/// <param name="bufferSize">Size of the buffer.</param>
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
	/// <param name="buffer">Text to add to the buffer.</param>
	void addBuffer(char* buffer);

	/// <summary>
	/// Will read the next char in the buffer.
	/// There is no check in place to see if we still have data left,
	/// it is assumed you do that yourself.
	/// In our stringstream inplementation that is the case.
	/// </summary>
	char readNextChar();

private:
	// Buffers.
	char **buffers;

	// Current buffer size.
	int bufferSize;

	// Index in the buffer.
	int currentIndex = 0;

	// Which buffer is currently being read.
	int bufferIndex = 0;

	// Current amount of buffers.
	int bufferAmount;

	// Current max amount of buffers.
	int bufferCap;
};

class StringStream
{
public:
	/// Constructor.	
	StringStream(int bufferSize);

	/// <summary>
	/// Insert char* into Stringstream.
	/// </summary>
	/// <param name="buffer">Char* to enter into Stringstream.</param>
	/// <param name="size">The amount of character to read.</param>
	void addBuffer(char* buffer, int size);

	/// <summary>
	/// Removes the next character from the stream and returns it.
	/// </summary>
	/// <returns>The next character of the stream.</returns>
	virtual char nextChar();

	/// <summary>
	/// Returns whether the Stringstream is busy or full.
	/// </summary>
	/// <returns>Only true if the Stringstream is empty and done receiving data.</returns>
	virtual bool stop();

	/// <summary>
	/// Set whether the input of the Stringstream has ended.
	/// </summary>
	/// <param name="b">True if the input has ended, false otherwise.</param>
	void setInputEnded(bool b);

	/// <summary>
	/// Set that the Stringstream has failed.
	/// </summary>
	void setFailed();

private:
	// Stream currently being written to.
	StringBuffer* writeStream;

	// Stream currently being read from.
	StringBuffer* readStream;

	// Whether the data input has ended.
	bool dataEnded = false;

	// Whether the data input has failed.
	bool failed = false;

	// Lock for swapping buffers.
	std::mutex lock;

	// Size of writeStream.
	int sizeWrite = 0;

	// Size of readStream.
	int sizeRead = 0;

	// Size of the read/write buffers.
	int buffersSize;
};
