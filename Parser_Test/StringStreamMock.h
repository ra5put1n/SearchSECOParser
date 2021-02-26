/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once
#include "../Parser/StringStream.h"

class StringStreamMock : public StringStream
{
public:
	StringStreamMock(std::string data) { this->data = data; };
	char NextChar() override { return data[pos++]; };
	bool Stop() override { return pos >= data.length(); };
private:
	int pos = 0;
	// Test string, will be replaces with an actual implementation at some point.
	std::string data;
};