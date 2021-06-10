/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
� Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#pragma once


#include "antlr4-runtime.h"
#include "generated/JavaScriptParserBaseListener.h"
#include "../../HashData.h"
#include <stack>


#include <map>

/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class CustomJavaScriptListener : public JavaScriptParserBaseListener
{
public:
	std::vector<HashData>* output;

	CustomJavaScriptListener(antlr4::TokenStreamRewriter *tsr, std::string fileName);

	~CustomJavaScriptListener();

private:
	antlr4::TokenStreamRewriter* tsr;
	size_t start, stop;
	std::string functionName, functionBody, fileName = "filenametest";
	bool inFunction = false, inSingleStatement = false;
};