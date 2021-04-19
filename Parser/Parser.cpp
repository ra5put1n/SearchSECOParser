/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include <iostream>
#include <algorithm>

#include "Parser.h"
#include "StringStream.h"
#include "SrcMLCaller.h"
#include "XmlParser.h"

std::vector<HashData> Parser::parse(std::string path, int numberThreads)
{

	std::cout << "Sending files to srcML\n";

	StringStream* stream = SrcMLCaller::startSrcML(path.c_str(), numberThreads);

	std::cout << "Received stream from srcML\n";

	std::cout << "Sending stream to Xml Parser\n";

	// Give XmlParser the path with / instead of \ for finding files.
	std::replace(path.begin(), path.end(), '\\', '/');
	XmlParser xmlParser = XmlParser(path);

	std::vector<HashData> hashes = xmlParser.parseXML(stream);

	std::cout << "hashes received from Parser, returning\n";

	return hashes;
}

