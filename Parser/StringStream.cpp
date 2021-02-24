/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include "StringStream.h"

int size;

StringStream::StringStream()
{
	size = 0;
}

void StringStream::AddBuffer(char* buffer, int length)
{
	stringStream << buffer;
	size += length;
}

char StringStream::NextChar()
{
	char c;
	stringStream >> c;
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
