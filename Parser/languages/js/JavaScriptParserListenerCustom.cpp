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
    this->baseTsr = tsr;
    this->fileName = fileName;
    output = new std::vector<HashData>();
    starts = std::stack<size_t>();
    tsrs = std::stack<antlr4::TokenStreamRewriter *>();
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
    tsrs.push(new antlr4::TokenStreamRewriter(baseTsr->getTokenStream()));
    functionNames.push("");
    starts.push(ctx->start->getLine());

    // Entered anonymous function definition.
    inNonAbsFuncDef = false;
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

    std::cout << functionBody << std::endl << std::endl;

    // Store method if complex enough.
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }

    // Change tsr to that of encapsulating function definition.
    tsrs.pop();

    // Anonymous functions are used immediately, so abstract to variable (the function itself is passed as an argument).
    if (!tsrs.empty())
    {
        tsrs.top()->replace(ctx->start, ctx->stop, "var");
    }
}

void CustomJavaScriptListener::enterFunctionDeclaration(JavaScriptParser::FunctionDeclarationContext *ctx)
{
    // Push initial values to stacks.
    tsrs.push(new antlr4::TokenStreamRewriter(baseTsr->getTokenStream()));
    functionNames.push("");
    starts.push(ctx->start->getLine());

    // Entered non-anonymous function definition.
    inNonAbsFuncDef = true;
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

    std::cout << functionBody << std::endl << std::endl;

    // Store method if complex enough.
    if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
    {
        output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    }

    // Change tsr to that of encapsulating function definition.
    tsrs.pop();

    // Definition could also be done outside of function, so remove definition entirely.
    if (!tsrs.empty())
    {
        tsrs.top()->replace(ctx->start, ctx->stop, "");
    }
}

void CustomJavaScriptListener::enterFunctionBody(JavaScriptParser::FunctionBodyContext *ctx)
{
    // Entered function body, so we must have exited the definition.
    inNonAbsFuncDef = false;
}

void CustomJavaScriptListener::exitFunctionBody(JavaScriptParser::FunctionBodyContext *ctx)
{
    // Store function body.
    functionBodies.push(tsrs.top()->getText(ctx->getSourceInterval()));
}

void CustomJavaScriptListener::enterIdentifier(JavaScriptParser::IdentifierContext *ctx)
{
    // Function name has not yet been decided and currently in non-anonymnous function definition.
    if (inNonAbsFuncDef && functionNames.top() == "")
    {
        // Then identifier is function name.
        functionNames.top() = ctx->start->getText();
    }
    // Check if in a function definition.
    else if (!tsrs.empty())
    {
        // Abstract other identifiers.
        tsrs.top()->replace(ctx->start, "var");
    }
}