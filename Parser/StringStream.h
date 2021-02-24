#pragma once
#include <string>
#include <sstream>

class StringStream
{
public:
	StringStream();
	void AddBuffer(char* buffer);
	char NextChar();
	bool Stop();
	void SetInputEnded(bool b);
	//std::string NextString(int size);
private:
	std::stringstream stringStream = std::stringstream();
	bool dataEnded = false;
};
