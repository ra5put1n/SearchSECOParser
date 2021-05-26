/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include <iostream>
#include <algorithm>

#include "loguru/loguru.hpp"

#include "Logger.h"
#include "Parser.h"
#include "StringStream.h"
#include "SrcMLCaller.h"
#include "XmlParser.h"

#include "antlrParser.h"


std::vector<HashData> Parser::parse(std::string path, int numberThreads)
{
	loguru::set_thread_name("parser");

	
	Logger::logInfo("Starting Parser", __FILE__, __LINE__);


	Logger::logDebug("Sending files to SrcML", __FILE__, __LINE__);
	StringStream* stream = SrcMLCaller::startSrcML(path.c_str(), numberThreads);
	Logger::logDebug("Received stream from srcML", __FILE__, __LINE__);

	Logger::logDebug("Sending stream to Xml Parser", __FILE__, __LINE__);
	// Give XmlParser the path with / instead of \ for finding files.
	std::replace(path.begin(), path.end(), '\\', '/');
	XmlParser xmlParser = XmlParser(path);

	std::vector<HashData> hashes = xmlParser.parseXML(stream);
	Logger::logDebug("Hashes received from Parser, returning", __FILE__, __LINE__);
	
	Logger::logInfo("SrcML parsing finished, methods found: " + hashes.size(), __FILE__, __LINE__);


	antlrParsing pser;
	std::vector<HashData> hashes2 = pser.parseDir(path);
	hashes.insert(hashes.end(), hashes2.begin(), hashes2.end());
	return hashes;
}

