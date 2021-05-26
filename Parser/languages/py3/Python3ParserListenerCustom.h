/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
� Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#pragma once


#include "antlr4-runtime.h"
#include "generated/Python3BaseListener.h"
#include "../../HashData.h"
#include <stack>


#include <map>

/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class CustomPython3Listener : public Python3BaseListener
{
public:
	std::vector<HashData> output;

	CustomPython3Listener(Python3Parser *parser, antlr4::TokenStreamRewriter *tsr, std::string fileName);

	virtual void enterFuncdef(Python3Parser::FuncdefContext *ctx) override;
    virtual void exitFuncdef(Python3Parser::FuncdefContext *ctx) override;

    virtual void enterFuncbody(Python3Parser::FuncbodyContext *ctx) override;
    virtual void exitFuncbody(Python3Parser::FuncbodyContext *ctx) override;

    virtual void enterName(Python3Parser::NameContext *ctx) override;

    virtual void enterFunccallname(Python3Parser::FunccallnameContext *ctx) override;


private:
    Python3Parser *parser;
	antlr4::TokenStreamRewriter* tsr;
	size_t start, stop;
	//std::map<std::string,antlr4::Token*> funccallTokens;
    std::string functionName, functionBody, fileName = "filenametest";//funccallName = "";
	bool inFunction = false;
};