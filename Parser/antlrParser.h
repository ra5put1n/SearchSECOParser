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

#define MAX_THREADS 8


class antlrParsing
{
public:
	/// <summary>
    /// Parses all parseable files in given directory.
    /// </summary>
    /// <param name = "repoPath"> The directory to be parsed. </param>
    /// <param name="numberOfThreads"> Max amount of threads to use</param>
	/// <returns></returns>
	static std::vector<HashData> parseDir(std::string repoPath, int numberOfThreads);

private:
    /// <summary>
    /// Program run on a single thread to parse a queue of files.
    /// </summary>
    /// <param name = "meths"> The returned HashData. </param>
    /// <param name = "outputLock"> Mutex that restricts access to meths. </param>
    /// <param name = "files"> The queue of files to parse. </param>
    /// <param name = "queueLock"> Mutex that restricts access to files queue. </param>
    static void singleThread(std::vector<HashData> &meths, std::mutex &outputLock, std::queue<std::string> &files,
                                 std::mutex &queueLock, std::string path);
    
    /// <summary>
    /// Parses a single file.
    /// </summary>
    /// <param name = "filepath"> The file to be parsed. </param>
    /// <param name = "meths"> The returned HashData. </param>
    /// <param name = "outputLock"> Mutex that restricts access to meths. </param>
    static void parseSingleFile(std::string filepath, std::vector<HashData> &meths, std::mutex &outputLock, std::string path);
};