/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

// NOLINTNEXTLINE
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING

#include <experimental/filesystem>
#include <fstream>
#include <iostream>
#include <thread>
#include <codecvt>
#include <cstring>

#include "antlr4-runtime.h"

#include "Logger.h"

#include "antlrParser.h"
#include "languages/LanguageBase.h"
#include "languages/py3/Python3AntlrImplementation.h"



// Method practically copied from Spider Revisited.
std::vector<HashData> antlrParsing::parseDir(std::string repoPath, int numberOfThreads)
{
	std::vector<HashData> meths;
	std::mutex outputLock;
	std::vector<std::thread> threads;

	if (numberOfThreads == -1)
	{
		numberOfThreads = DEFAULT_NUMBER_THREADS;
	}

	// Thread-safe queue (with lock).
	std::queue<std::string> files;
	std::mutex queueLock;
	auto dirIter = std::experimental::filesystem::recursive_directory_iterator(repoPath);

	// Loop over all files.
	for (const auto &path : dirIter)
	{
		std::string s = (path.path()).string();
		if (path.path().has_extension() && path.path().extension() == ".py")
		{
			files.push(s);
		}
	}

	// Construct threads to process the queue.
	for (int i = 0; i < numberOfThreads; i++)
	{
		threads.push_back(std::thread(&antlrParsing::singleThread, std::ref(meths), std::ref(outputLock),
									  std::ref(files), std::ref(queueLock), std::ref(repoPath)));
	}

	// Wait on threads to finish.
	for (auto &th : threads)
	{
		th.join();
	}

	getFacade(".py")->ClearCache();

	return meths;
}

void antlrParsing::singleThread(std::vector<HashData> &meths, std::mutex &outputLock, std::queue<std::string> &files,
								std::mutex &queueLock, std::string path)
{
	while (true)
	{
		// Lock the queue.
		queueLock.lock();
		if (files.size() <= 0)
		{
			queueLock.unlock();
			return;
		}
		std::string file = files.front();
		files.pop();
		queueLock.unlock();
		parseSingleFile(file, meths, outputLock, path);
	}
}


LanguageBase* antlrParsing::getFacade(std::string fileName)
{
	std::experimental::filesystem::path path = std::experimental::filesystem::path(fileName);
	if (path.extension() == ".py")
	{
		return new Python3AntlrImplementation();
	}
	else
	{
		return nullptr;
	}
}
#if defined(WIN32) || defined(_WIN32)
// Convert utf8 based on cdycdr's answer to 
// https://stackoverflow.com/questions/17562736/how-to-convert-from-utf-8-to-ansi-using-standard-c.
std::string antlrParsing::toUtf8(const std::string& str, const std::locale& loc)
{
	using wcvt = std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t>;
	std::u32string wstr(str.size(), U'\0');
	std::use_facet<std::ctype<char32_t>>(loc).widen(str.data(), str.data() + str.size(), &wstr[0]);
	return wcvt{}.to_bytes(wstr.data(), wstr.data() + wstr.size());
}
#else
// different method in UNIX
// source: https://stackoverflow.com/questions/4059775/convert-iso-8859-1-strings-to-utf-8-in-c-c
std::string antlrParsing::toUtf8(std::string& str, const std::locale& loc)
{
	std::string strOut;
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		uint8_t ch = *it;
		if (ch < 0x80)
		{
			strOut.push_back(ch);
		}
		else
		{
			strOut.push_back(0xc0 | ch >> 6);
			strOut.push_back(0x80 | (ch & 0x3f));
		}
	}
	return strOut;
}
#endif
void antlrParsing::parseSingleFile(std::string filepath, std::vector<HashData> &meths, std::mutex &outputLock, std::string path)
{
	std::ifstream file(filepath);
	if (file.is_open())
	{

		file.seekg(0, std::ios::end);
		size_t size = file.tellg();
		std::string buffer(size, ' ');
		file.seekg(0);
		file.read(&buffer[0], size);

		
		const char* bom = "\xef\xbb\xbf";
		std::string data;

		if (buffer.length() >= 3 && strncmp(buffer.c_str(), bom, 3) == 0)
		{
			data = buffer;
		}
		else
		{
			try
			{
				data = toUtf8(buffer);
			}
			catch (const std::exception& e) 
			{
				std::string log = "Can't convert file" + filepath + " to utf-8, skipping \n Error: " + e.what();
				Logger::logWarn(log.c_str(), __FILE__, __LINE__);
				return;
			}
		}

		// Retrieve parser for this file, if available
		LanguageBase* lf = getFacade(filepath);

		if (lf == nullptr)
		{
			std::string log = "Can't find parser for file " + filepath + ", skipping";
			Logger::logInfo(log.c_str(), __FILE__, __LINE__);
			return;
		}

		std::vector<HashData> output = lf->parseData(data, filepath.erase(0,path.length() + 1));

		outputLock.lock();
		meths.insert(meths.end(), output.begin(), output.end());
		outputLock.unlock();

		file.close();
	}
	else
	{
		std::string log = "Can't open file: " + filepath + ", skipping";
		Logger::logWarn(log.c_str(), __FILE__, __LINE__);
	}
}



