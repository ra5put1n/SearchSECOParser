/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
� Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include <iostream>
#include "StringStream.h"
#include "XmlParser.h"
#include "Node.h"

void wrongArgs();



int main(int argc, char* argv[])
{
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


	StringStream stream = srcML(path);
	
	std::cout << "Received stream from srcML\n";

	std::cout << "Sending stream to abstract syntax tree creator\n";

	Node tree = createAbstractSyntax(stream);

	std::cout << "Received abstract syntax tree from creator\n";

	std::cout << "Sending abstract syntax tree to parser\n";

	std::string hashable = abstractSyntaxTreeParser(tree);

	std::cout << "Received hashable from abstract syntax tree\n";

	std::cout << "Sending hashable to hasher\n";

	std::string hash = hasher(hashable);

	std::cout << "hash received from hasher, hash:\n";
	
	std::cout << hash <<std::endl;

	system("pause");
	return 0;
}


// To be called when invalid arguments are given
void wrongArgs()
{
	std::cout << "\nUsage is as follows: Parser.exe <path> \n <path> - Path to the directory which contains the files which need parsing" << std::endl;
}