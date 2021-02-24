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