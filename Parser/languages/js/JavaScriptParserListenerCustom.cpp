/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "JavaScriptParserListenerCustom.h"
#include "../../md5/md5.h"

#define MIN_FUNCTION_CHARACTERS 50
#define MIN_FUNCTION_LINES 6

CustomJavaScriptListener::CustomJavaScriptListener(antlr4::TokenStreamRewriter *tsr, std::string fileName)
{
    this->tsr = tsr;
    this->fileName = fileName;
    output = new std::vector<HashData>();
    starts = std::stack<size_t>();
    functionNames = std::stack<std::string>();
    functionBodies = std::stack<std::string>();
    stop = 0;
}

CustomJavaScriptListener::~CustomJavaScriptListener()
{
    delete output;
}

void CustomJavaScriptListener::enterAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx)
{
    // Push initial values to stacks.
    functionNames.push("");
    functionBodies.push("");
    starts.push(ctx->start->getLine());

    // Entered anonymous function definition.
    inFuncDef = false;
}

void CustomJavaScriptListener::exitAnonymousFunctionDecl(JavaScriptParser::AnonymousFunctionDeclContext *ctx)
{
    // Retrieve relevant data from stacks.
    std::string functionName = functionNames.top();
    functionNames.pop();

    std::string functionBody = functionBodies.top();
    functionBodies.pop();

    size_t start = starts.top();
    starts.pop();
    stop = ctx->stop->getLine();

    // Remove all whitespace.
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\n'), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\r'), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), ' '), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\t'), functionBody.end());

    // Store method if complex enough.
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }

    // Anonymous functions are used immediately, so abstract to variable (the function itself is passed as an argument).
    tsr->replace(ctx->start, ctx->stop, "var");
}

void CustomJavaScriptListener::enterFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx)
{
    // Push initial values to stacks.
    functionNames.push("");
    functionBodies.push("");
    starts.push(ctx->start->getLine());

    // Entered non-anonymous function definition.
    inFuncDef = true;
}

void CustomJavaScriptListener::exitFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx)
{
    // Retrieve relevant data from stacks.
    std::string functionName = functionNames.top();
    functionNames.pop();

    std::string functionBody = functionBodies.top();
    functionBodies.pop();

    size_t start = starts.top();
    starts.pop();
    stop = ctx->stop->getLine();

    // Remove all whitespace.
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\n'), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\r'), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), ' '), functionBody.end());
    functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\t'), functionBody.end());

    // Store method if complex enough.
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }

    // Definition could also be done outside of function, so remove definition entirely.
    tsr->replace(ctx->start, ctx->stop, "");
}

void CustomJavaScriptListener::enterParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx)
{
    // Entered function body, so we must have exited the definition.
    inFuncDef = false;
}

void CustomJavaScriptListener::exitParseFunctionBody(JavaScriptParser::ParseFunctionBodyContext *ctx)
{
    // Store function body.
    functionBodies.push(tsr->getText(ctx->getSourceInterval()));
}

void CustomJavaScriptListener::enterIdentifier(JavaScriptParser::IdentifierContext *ctx)
{
    // Function name has not yet been decided and currently in non-anonymnous function definition.
    if (inFuncDef && functionNames.top() == "")
    {
        // Then identifier is function name.
        functionNames.top() = ctx->start->getText();
    }
    else
    {
        // Abstract other identifiers.
        tsr->replace(ctx->start, "var");
    }
}