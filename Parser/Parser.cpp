/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include "Parser.h"


std::vector<std::string> Parser::Parse(ParseInfo info)
{
	std::string path = info.path;

	int numberThreads = info.numberThreads;

	std::cout << "Sending files to srcML\n";

	StringStream* stream = SrcMLCaller::StartSrcML(path.c_str(), numberThreads);

	std::cout << "Received stream from srcML\n";

	std::cout << "Sending stream to Xml Parser\n";

	// plus one to get rid of the extra / at the beginning
	XmlParser xmlParser = XmlParser(path.length() + 1);
	std::vector<std::string> hashes = xmlParser.ParseXML(stream);

	std::cout << "hashes received from Parser, returning\n";

	return hashes;
}

