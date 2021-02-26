/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include "StringStream.h"
#include <iostream>

int size;

StringStream::StringStream()
{
	size = 0;
}

void StringStream::AddBuffer(char* buffer, int length)
{
	std::unique_lock<std::mutex> l(lock);
	stringStream << buffer;
	size += length;
}

char StringStream::NextChar()
{
	std::unique_lock<std::mutex> l(lock);
	char c;
	stringStream.read(&c, 1);
	size--;
	return c;
}

bool StringStream::Stop()
{

	return (dataEnded && size == 0);
}

void StringStream::SetInputEnded(bool b)
{
	dataEnded = b;
}
