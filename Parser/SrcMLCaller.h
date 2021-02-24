/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once
#include <string>
#include "StringStream.h"

class SrcMLCaller
{
public:
	static StringStream* StartSrcML(const char* cmd);
};