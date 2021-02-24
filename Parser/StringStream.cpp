/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
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

	return (dataEnded && (stringStream.eof()));
	//Stops 1 character too late
}

void StringStream::SetInputEnded(bool b)
{
	dataEnded = b;
}
