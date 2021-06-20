/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "Python3ParserListenerCustom.h"
#include "../../md5/md5.h"

#define MIN_FUNCTION_CHARACTERS 50
#define MIN_FUNCTION_LINES 6

CustomPython3Listener::CustomPython3Listener(antlr4::TokenStreamRewriter *tsr,
											 std::string fileName)
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

CustomPython3Listener::~CustomPython3Listener()
{
	delete output;
}

void CustomPython3Listener::enterFuncdef(Python3Parser::FuncdefContext *ctx)
{
    tsrs.push(new antlr4::TokenStreamRewriter(baseTsr->getTokenStream()));
    functionNames.push("");
    starts.push(ctx->start->getLine());
}

void CustomPython3Listener::exitFuncdef(Python3Parser::FuncdefContext *ctx)
{
    // Retrieve relevant data from stacks.
    std::string functionName = functionNames.top();
    functionNames.pop();

    std::string functionBody = functionBodies.top();
    functionBodies.pop();

    size_t start = starts.top();
    starts.pop();
	stop = ctx->stop->getLine();

	// Remove all newlines and carriage returns.
	functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\n'), functionBody.end());
	functionBody.erase(std::remove(functionBody.begin(), functionBody.end(), '\r'), functionBody.end());

	if (stop - start >= MIN_FUNCTION_LINES && functionBody.size() > MIN_FUNCTION_CHARACTERS)
	{
		output->push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
	}
    inFunction = false;

    // Change tsr to that of encapsulating function definition.
    tsrs.pop();

    // Definition could also be done outside of function, so remove definition entirely.
    if (!tsrs.empty())
    {
        tsrs.top()->replace(ctx->start, ctx->stop, "");
    }
}

void CustomPython3Listener::enterFuncbody(Python3Parser::FuncbodyContext *ctx)
{
	inFunction = true;
}

void CustomPython3Listener::exitFuncbody(Python3Parser::FuncbodyContext *ctx)
{
    // Store function body.
    functionBodies.push(tsrs.top()->getText(ctx->getSourceInterval()));
}

void CustomPython3Listener::enterName(Python3Parser::NameContext *ctx)
{
	if (functionName == "")
	{
		functionName = ctx->start->getText();
	}

	if (inFunction && !tsrs.empty())
	{
		tsrs.top()->replace(ctx->start, "var");
	}
}

void CustomPython3Listener::enterFunccallname(Python3Parser::FunccallnameContext *ctx)
{
    // Check if in a function definition.
    if (!tsrs.empty())
    {
        tsrs.top()->replace(ctx->start, "funccall");
    }
}

void CustomPython3Listener::enterExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx)
{
	inSingleStatement = true;
}

void CustomPython3Listener::exitExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx)
{
	inSingleStatement = false;
}

void CustomPython3Listener::enterString(Python3Parser::StringContext *ctx)
{
	if (inSingleStatement && !tsrs.empty())
	{
        tsrs.top()->replace(ctx->start, "");
	}
}