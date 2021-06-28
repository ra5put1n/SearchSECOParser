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

class CustomJavaScriptListener : public JavaScriptParserBaseListener
{
public:
	/// <summary>
	/// Constructor.
	/// </summary>
	/// <param name="tsr">TokenStreamRewriter containing the tokens, for abstraction.</param>
	/// <param name="fileName">Filename, will be added to hashes.</param>
	CustomJavaScriptListener(antlr4::TokenStreamRewriter *tsr, std::string fileName);

	~CustomJavaScriptListener();

	/// <summary>
	/// Entering anonymous function, record starting line and start looking for function name.
	/// </summary>
	virtual void enterAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx) override;
	/// <summary>
	/// Exiting anonymous function, collect data found concerning function and save if applicable.
	/// </summary>
	virtual void exitAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx) override;

	/// <summary>
	/// Entering function declaration, record starting line and start looking for function name.
	/// </summary>
	virtual void enterFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;
	/// <summary>
	/// Exiting function declaration, collect data found concerning function and save if applicable.
	/// </summary>	
	virtual void exitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx) override;

	/// <summary>
	/// Entering function body, start abstracting if necessary.
	/// </summary>
	virtual void enterParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx) override;
	/// <summary>
	/// Exiting function body, save abstracted body.
	/// </summary>
	virtual void exitParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx) override;

	/// <summary>
	/// Variable, could be function name or variable in body, handle both.
	/// </summary>
	virtual void enterIdentifier(JavaScriptParser::IdentifierContext *ctx) override;

	// Found methods.
	std::vector<HashData>* output;

private:
	// Initial TokenStreamRewriter given to the listener.
	antlr4::TokenStreamRewriter *baseTsr;

	// Stack of TokenStreamRewriter for nested functions.
	std::stack<antlr4::TokenStreamRewriter *> tsrs;

	// Stack of method starting lines for nested functions.
	std::stack<size_t> starts;

	// Stack of method names and bodies for nested functions.
	std::stack<std::string> functionNames, functionBodies; 

	// End line of function.
	size_t stop;

	std::string fileName = "filenametest";

	// For keeping track of status in parse tree.
	bool inNonAbsFuncDef = false;
};