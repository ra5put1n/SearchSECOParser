/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once
#include <iostream>
#include <vector>
#include "StringStream.h"
#include "XmlParser.h"
#include "SrcMLCaller.h"



class Parser
{
public:
	/// <summary>
	/// Parse the files in a location, return hashes with metadata of found functions
	/// </summary>
	/// <param name="path">Path to look for files, also looks in folders</param>
	/// <param name="numberThreads">Maximum number of threads the parser may use</param>
	/// <returns></returns>
	static std::vector<HashData> Parse(std::string path, int numberThreads = -1);
private:
};