﻿/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include <iostream>
#include <vector>
#include "StringStream.h"
#include "XmlParser.h"
#include "Node.h"
#include "SrcMLCaller.h"
#include "StringStream.h"

void wrongArgs();



int main(int argc, char* argv[])
{

	// Retrieve the given path from the arguments
	std::string path;

	if (argc > 1)
	{
		path = argv[1];
    }
	else
	{
		wrongArgs();
		system("pause");
		return 0;
	}

	std::cout << "Sending files to srcML\n";


	StringStream* stream = SrcMLCaller::StartSrcML(path.c_str());
	
	std::cout << "Received stream from srcML\n";

	std::cout << "Sending stream to Xml Parser\n";

	// plus one to get rid of the extra / at the beginning
	XmlParser xmlParser = XmlParser(path.length() + 1);
	std::vector<std::string> hashes = xmlParser.ParseXML(stream);

	std::cout << "hashes received from Parser, hashes:\n";
	
	//std::cout << "Hash amount: " << hashes.size() << std::endl;
	for (std::string h : hashes) 
	{
		std::cout << h << std::endl;
	}
	
	return 0;
}


// To be called when invalid arguments are given
void wrongArgs()
{
	std::cout << "\nUsage is as follows: Parser.exe <path> \n <path> - Path to the directory which contains the files which need parsing" << std::endl;
}