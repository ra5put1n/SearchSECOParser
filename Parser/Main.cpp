/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include <iostream>
#include "StringStream.h"
#include "XmlParser.h"

int main()
{
	StringStream* ss = new StringStream();
	XmlParser xmlp = XmlParser(ss);
	return 0;
}