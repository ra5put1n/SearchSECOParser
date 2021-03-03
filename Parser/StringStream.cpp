/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include "StringStream.h"
#include <iostream>



StringStream::StringStream()
{
}

void StringStream::AddBuffer(char* buffer, int length)
{
	std::unique_lock<std::mutex> l(lock);
	writeStream->write(buffer, length);
	sizeWrite += length;
}

char StringStream::NextChar()
{
	// If there is something to read, read and return the value
	if (sizeRead > 0)
	{
		char c;
		readStream->read(&c, 1);
		sizeRead--;
		return c;
	}

	// Check the whether the write stream is empty
	int s = 0;
	{
		std::unique_lock<std::mutex> l(lock);
		s = sizeWrite;
	}

	// Keep waiting until there is something in the write stream or the data has ended
	while (s <= 0)
	{
		std::unique_lock<std::mutex> l(lock);
		if (dataEnded && sizeWrite <= 0)
		{
			return '\0';
		}
		s = sizeWrite;
	}

	// Swap the read and write streams and read the next character
	std::unique_lock<std::mutex> l(lock);
	delete readStream;
	readStream = writeStream;
	writeStream = new std::stringstream();
	sizeRead = sizeWrite;
	sizeWrite = 0;

	char c;
	readStream->read(&c, 1);
	sizeRead--;
	return c;
}

bool StringStream::Stop()
{
	std::unique_lock<std::mutex> l(lock);
	// The stringstream is done when the input is done and both streams are empty
	return (dataEnded && sizeRead <= 0 && sizeWrite <= 0);
}

void StringStream::SetInputEnded(bool b)
{
	std::unique_lock<std::mutex> l(lock);
	dataEnded = b;
}
