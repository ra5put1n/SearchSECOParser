#pragma once
#include <string>
#include "StringStream.h"

class SrcMLCaller
{
public:
	static StringStream* StartSrcML(std::string path);
};