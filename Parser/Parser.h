/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once

#include <vector>

#include "HashData.h"

#define PARSER_HASH_VERSION 1


class Parser
{
public:
	static int getHashVersion()
	{
		return PARSER_HASH_VERSION;
	}

	/// <summary>
	/// Parse the files in a location, return hashes with metadata of found functions.
	/// </summary>
	/// <param name="path">Path to look for files, also looks in folders.</param>
	/// <param name="numberThreads">Maximum number of threads the parser may use.</param>
	/// <returns>Vector containing a HashData element for every method, containing data.</returns>
	static std::vector<HashData> parse(std::string path, int numberThreads = -1);
private:
};