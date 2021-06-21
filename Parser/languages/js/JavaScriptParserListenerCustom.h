/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
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

	virtual void enterAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx) override;
	virtual void exitAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx) override;

	virtual void enterFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;
	virtual void exitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;

	virtual void enterParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx) override;
	virtual void exitParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx) override;

	virtual void enterIdentifier(JavaScriptParser::IdentifierContext *ctx) override;

private:
	antlr4::TokenStreamRewriter *baseTsr;
	std::stack<antlr4::TokenStreamRewriter *> tsrs;
	std::stack<size_t> starts;
	std::stack<std::string> functionNames, functionBodies; 
	size_t stop;
	std::string fileName = "filenametest";
	bool inNonAbsFuncDef = false;
};