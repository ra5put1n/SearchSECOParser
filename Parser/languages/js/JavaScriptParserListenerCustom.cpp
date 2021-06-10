/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "JavaScriptParserListenerCustom.h"
#include "../../md5/md5.h"

#define MIN_FUNCTION_CHARACTERS 50
#define MIN_FUNCTION_LINES 6

CustomJavaScriptListener::CustomJavaScriptListener(antlr4::TokenStreamRewriter *tsr,
											 std::string fileName)
{
	this->tsr = tsr;
	this->fileName = fileName;
	output = new std::vector<HashData>();
	start = 0;
	stop = 0;
}

CustomJavaScriptListener::~CustomJavaScriptListener()
{
	delete output;
}