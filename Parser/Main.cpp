/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include "Parser.h"


void WrongArgs();


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
		WrongArgs();
		system("pause");
		return 0;
	}

	std::vector<HashData> hashes = Parser::Parse(path);
	
	//std::cout << "Hash amount: " << hashes.size() << std::endl;
	for (HashData h : hashes)
	{
		std::cout << h.hash << " " << h.functionName << " " << h.fileName << " " << h.lineNumber << std::endl;
	}
	
	return 0;
}


// To be called when invalid arguments are given
void WrongArgs()
{
	std::cout << "\nUsage is as follows: Parser.exe <path> \n <path> - Path to the directory which contains the files which need parsing" << std::endl;
}