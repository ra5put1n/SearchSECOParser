/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#pragma once

#include <vector>
#include <string>
#include <queue>

#include "HashData.h"



class antlrParsing
{
public:
	static std::vector<HashData> parseFile(std::string repoPath);
private:
    static void singleThread(std::vector<HashData> &meths, std::mutex &outputLock, std::queue<std::string> &files,
                                 std::mutex &queueLock);
    static void parseSingleFile(std::string filepath, std::vector<HashData> &meths, std::mutex &outputLock);
};