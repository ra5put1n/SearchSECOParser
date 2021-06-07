/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)*/

#pragma once

#include <string>

#include "antlr4-runtime.h"
#include "../HashData.h"
#include "../Logger.h"

class LanguageBase
{
public:
	virtual std::vector<HashData> parseData(std::string data, std::string filePath) = 0;
	virtual void ClearCache() = 0;

};

