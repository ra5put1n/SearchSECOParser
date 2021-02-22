#include "StringStream.h"

StringStream::StringStream()
{
}

void StringStream::AddBuffer(char* buffer)
{
	stringStream << buffer;
}

char StringStream::NextChar()
{
	char c;
	stringStream >> c;
	return c;
}

bool StringStream::Stop()
{

	return (dataEnded && (stringStream.tellp() == std::streampos(0)));
}

void StringStream::SetInputEnded(bool b)
{
	dataEnded = b;
}
