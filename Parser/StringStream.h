/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once
#include <string>
#include <sstream>

class StringStream
{
public:
	StringStream();
	void AddBuffer(char* buffer, int size);
	virtual char NextChar();
	virtual bool Stop();
	void SetInputEnded(bool b);
	//std::string NextString(int size);
private:
	std::stringstream stringStream = std::stringstream();
	bool dataEnded = false;
};
