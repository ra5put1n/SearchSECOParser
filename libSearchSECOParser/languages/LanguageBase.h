/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/
#pragma once

#include <string>

#include "antlr4-runtime.h"
#include "../HashData.h"
#include "../Logger.h"

class LanguageBase
{
public:
	/// <summary>
	/// Parses the data given using ANTLR, returns found methods.
	/// </summary>
	/// <param name="data">File content in UTF-8 format.</param>
	/// <param name="filePath">Location of file.</param>
	/// <returns>Vector of HashData containing info on found methods.</returns>
	virtual std::vector<HashData> parseData(std::string data, std::string filePath) = 0;

	/// <summary>
	/// Clears the cache of the ANTLR parser and lexer, to free memory.
	/// </summary>
	virtual void ClearCache() = 0;
};

