/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#pragma once

#include <vector>
#include <string>
#include <queue>
#include <mutex>

#include "HashData.h"
#include "languages/LanguageBase.h"

#define DEFAULT_NUMBER_THREADS 16


class antlrParsing
{
public:
	/// <summary>
	/// Parses all parseable files in given directory.
	/// </summary>
	/// <param name = "repoPath"> The directory to be parsed. </param>
	/// <param name="numberOfThreads"> Max amount of threads to use. </param>
	/// <returns> A vector of hashes found in the files in the directory. </returns>
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

	/// <summary>
	/// Get the appropriate parser for a file.
	/// </summary>
	/// <param name = "fileName"> The filename including extension to get a parser for. </param>
	/// <returns> A concrete instance of LanguageBase containing methods necessary for parsing. </returns>
	static LanguageBase* getFacade(std::string fileName);

	/// <summary>
	/// Parses ANSI files to UTF-8.
	/// </summary>
	/// <param name = "str"> Text to convert. </param>
	/// <param name="loc"> Location to use, default current one. </param>
	/// <returns> The converted text </returns>
	static std::string toUtf8(
#if defined(WIN32) || defined(_WIN32)
		const
#endif
		std::string& str, const std::locale& loc = std::locale{});
};