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
