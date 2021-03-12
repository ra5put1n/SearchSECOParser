#pragma once
/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include <iostream>
#include <vector>
#include "StringStream.h"
#include "XmlParser.h"
#include "SrcMLCaller.h"

struct ParseInfo
{
public:
	/// <summary>
	/// Information concerning a Parse
	/// </summary>
	/// <param name="path">path to parse from</param>
	/// <param name="numberThreads">Maximum threads allowed, default: unrestricted</param>
	ParseInfo(std::string path, int numberThreads = -1)
	{
		this->path = path;
		this->numberThreads = numberThreads;
	};
	std::string path;
	int numberThreads;
};

class Parser
{
public:
	std::vector<std::string> Parse(ParseInfo info);
private:
};