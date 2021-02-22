#include <iostream>
#include "StringStream.h"
#include "XmlParser.h"

int main()
{
	StringStream* ss = new StringStream();
	XmlParser xmlp = XmlParser(ss);
	return 0;
}