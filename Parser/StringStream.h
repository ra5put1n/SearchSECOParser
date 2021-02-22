#pragma once
#include <string>

class StringStream
{
public:
	StringStream();
	void AddBuffer(char* buffer, int bufferSize);
	char NextChar();
	std::string NextString(int size);
	bool Stop();
};
