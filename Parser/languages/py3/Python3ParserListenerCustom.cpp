/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "Python3ParserListenerCustom.h"
#include "../../md5/md5.h"

CustomPython3Listener::CustomPython3Listener(Python3Parser *parser, antlr4::TokenStreamRewriter *tsr,
                                             std::string fileName)
{
    this->parser = parser;
    this->tsr = tsr;
    this->fileName = fileName;
    start = 0;
    stop = 0;
}

void CustomPython3Listener::enterFuncdef(Python3Parser::FuncdefContext *ctx)
{
    functionName = "";
    start = ctx->start->getLine();
}

void CustomPython3Listener::exitFuncdef(Python3Parser::FuncdefContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionBody << std::endl;
    output.push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    inFunction = false;
}

void CustomPython3Listener::enterFuncbody(Python3Parser::FuncbodyContext *ctx)
{
    inFunction = true;
}

void CustomPython3Listener::exitFuncbody(Python3Parser::FuncbodyContext *ctx)
{
    functionBody = tsr->getText(ctx->getSourceInterval());
}

void CustomPython3Listener::enterName(Python3Parser::NameContext *ctx)
{
    if (functionName == "")
    {
        functionName = ctx->start->getText();
    }

    if (inFunction)
    {
        tsr->replace(ctx->start, "var");
    }
}

void CustomPython3Listener::enterFunccallname(Python3Parser::FunccallnameContext *ctx)
{
    tsr->replace(ctx->start, "funccall");
}