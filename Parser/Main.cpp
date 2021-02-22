#include <iostream>


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

	

	
	std::cout << path << std::endl;

	system("pause");
	return 0;
}


// To be called when invalid arguments are given
void wrongArgs()
{
	std::cout << "\nUsage is as follows: Parser.exe <path> \n <path> - Path to the directory which contains the files which need parsing" << std::endl;
}