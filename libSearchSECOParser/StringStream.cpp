/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include "StringStream.h"

StringStream::StringStream(int bufferSize)
{
	readStream = new StringBuffer(bufferSize);
	writeStream = new StringBuffer(bufferSize);
	this->buffersSize = bufferSize;
}

void StringStream::addBuffer(char* buffer, int length)
{
	std::unique_lock<std::mutex> l(lock);
	writeStream->addBuffer(buffer);
	sizeWrite += length;
}

char StringStream::nextChar()
{
	// If there is something to read, read and return the value.
	if (sizeRead > 0)
	{
		sizeRead--;
		return readStream->readNextChar();
	}

	// Check the whether the write stream is empty.
	int s = 0;
	{
		std::unique_lock<std::mutex> l(lock);
		s = sizeWrite;
	}

	// Keep waiting until there is something in the write stream or the data has ended.
	while (s <= 0)
	{
		std::unique_lock<std::mutex> l(lock);
		if (dataEnded && sizeWrite <= 0)
		{
			return '\0';
		}
		s = sizeWrite;
	}

	// Swap the read and write streams and read the next character.
	std::unique_lock<std::mutex> l(lock);
	delete readStream;
	readStream = writeStream;
	writeStream = new StringBuffer(buffersSize);
	sizeRead = sizeWrite;
	sizeWrite = 0;

	return this->nextChar();
}

bool StringStream::stop()
{
	// We want to make sure we don't lock the thread if it is not necessary,
	// so we check this first.
	if (sizeRead > 0)
	{
		return false;
	}
	std::unique_lock<std::mutex> l(lock);
	// The stringstream is done when the input is done and both streams are empty.
	return (dataEnded && sizeWrite <= 0);
}

void StringStream::setInputEnded(bool b)
{
	std::unique_lock<std::mutex> l(lock);
	dataEnded = b;
}

StringBuffer::StringBuffer(int bufferSize)
{
	bufferCap = SEARCHSECOPARSER_STRINGSTREAM_INITIAL_STRINGBUFFER_SIZE;
	buffers = new char*[bufferCap];
	bufferAmount = 0;
	this->bufferSize = bufferSize;
}

void StringBuffer::addBuffer(char *buffer)
{
	if (bufferAmount == bufferCap)
	{
		char **old = buffers;
		buffers = new char *[bufferCap * 2];
		for (int i = 0; i < bufferCap; i++)
		{
			buffers[i] = old[i];
		}
		bufferCap *= 2;
		delete[] old;
	}
	buffers[bufferAmount++] = buffer;
}

char StringBuffer::readNextChar()
{
	char c = buffers[bufferIndex][currentIndex];
	currentIndex++;
	if (currentIndex >= bufferSize)
	{
		currentIndex = 0;
		delete[] buffers[bufferIndex];
		bufferIndex++;
	}
	return c;
}
