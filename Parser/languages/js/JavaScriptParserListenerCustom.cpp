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

void CustomJavaScriptListener::enterAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx)
{
    functionName = "";
    start = ctx->start->getLine();
    inFuncDef = false;
}

void CustomJavaScriptListener::exitAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionBody << std::endl << std::endl;
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }
}

void CustomJavaScriptListener::enterFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx)
{
    functionName = "";
    start = ctx->start->getLine();
    inFuncDef = true;
}

void CustomJavaScriptListener::exitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionName << std::endl << std::endl << functionBody << std::endl << std::endl;
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }
}

void CustomJavaScriptListener::enterFunctionBody(JavaScriptParser::FunctionBodyContext *ctx)
{
    inFuncDef = false;
}

void CustomJavaScriptListener::exitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx)
{
    functionBody = tsr->getText(ctx->getSourceInterval());
}

void CustomJavaScriptListener::enterIdentifier(JavaScriptParser::IdentifierContext *ctx)
{
    if (inFuncDef && functionName == "")
    {
        functionName = ctx->start->getText();
    }
}