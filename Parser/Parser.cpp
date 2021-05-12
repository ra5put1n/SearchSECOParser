/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include <iostream>
#include <algorithm>

#include "loguru/loguru.hpp"

#include "Parser.h"
#include "StringStream.h"
#include "SrcMLCaller.h"
#include "XmlParser.h"

#include "antlrParser.h"


std::vector<HashData> Parser::parse(std::string path, int numberThreads)
{
	loguru::set_thread_name("parser");

	
	LOG_F(INFO, "Sending files to srcML");

	StringStream* stream = SrcMLCaller::startSrcML(path.c_str(), numberThreads);

	LOG_F(INFO, "Received stream from srcML");
	LOG_F(INFO, "Sending stream to Xml Parser");

	// Give XmlParser the path with / instead of \ for finding files.
	std::replace(path.begin(), path.end(), '\\', '/');
	XmlParser xmlParser = XmlParser(path);

	std::vector<HashData> hashes = xmlParser.parseXML(stream);
	
	LOG_F(INFO, "Hashes received from Parser, returning");
	

	antlrParsing pser;
	std::vector<HashData> hashes2 = pser.parseFile(path);
	hashes.insert(hashes.end(), hashes2.begin(), hashes2.end());
	return hashes;
}

