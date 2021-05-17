/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "CPP14ParserListenerCustom.h"
#include "../../md5/md5.h"

CustomCPP14Listener::CustomCPP14Listener(CPP14Parser *parser, antlr4::TokenStreamRewriter *tsr, std::string fileName)
{
    this->parser = parser;
    this->tsr = tsr;
    this->fileName = fileName;
    start = 0;
    stop = 0;
}

void CustomCPP14Listener::enterFunctionDefinition(CPP14Parser::FunctionDefinitionContext *ctx)
{
    inHeader = true;
    functionName = "";
    start = ctx->start->getLine();
}

void CustomCPP14Listener::exitFunctionDefinition(CPP14Parser::FunctionDefinitionContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionBody << std::endl << std::endl;
    output.push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    inFunction = false;
}

void CustomCPP14Listener::enterFunctionBody(CPP14Parser::FunctionBodyContext *ctx)
{
    inHeader = false;
}

void CustomCPP14Listener::exitFunctionBody(CPP14Parser::FunctionBodyContext *ctx)
{
    functionBody = tsr->getText(ctx->getSourceInterval());
}

void CustomCPP14Listener::enterPostfixExpression(CPP14Parser::PostfixExpressionContext *ctx)
{
    int numChildren = ctx->children.size();
    if (numChildren > 1)
    {
        postfixOpeningTokens.push(ctx->children[1]->toString());
        inFunccall = true;
    }
    else
    {
        postfixOpeningTokens.push("");
    }
    return;
    if (funccallName == "")
    {
        funccallName = ctx->start->getText();
    }
}

void CustomCPP14Listener::exitPostfixExpression(CPP14Parser::PostfixExpressionContext *ctx)
{
    postfixOpeningTokens.pop();
    inFunccall = false;
    funccallName = "";
    return;
}


void CustomCPP14Listener::enterDeclarator(CPP14Parser::DeclaratorContext *ctx)
{
    antlr4::Token *tk = ctx->start;
    tsr->replace(tk, "decl");
}

void CustomCPP14Listener::enterUnqualifiedId(CPP14Parser::UnqualifiedIdContext *ctx)
{
    if (inHeader && functionName == "")
    {
        functionName = ctx->start->getText();
    }
}

void CustomCPP14Listener::enterIdExpression(CPP14Parser::IdExpressionContext *ctx)
{
    if (postfixOpeningTokens.empty())
        return;
    std::string top = postfixOpeningTokens.top();
    postfixOpeningTokens.pop();

    if (!postfixOpeningTokens.empty() && (postfixOpeningTokens.top() == "(" && (inFunccall || (top == "." || top == "->"))))
    {
        tsr->replace(ctx->start, "funccall");
    }
    else
    {
        tsr->replace(ctx->start, "var");
    }
    postfixOpeningTokens.push(top);
}

void CustomCPP14Listener::enterExpressionList(CPP14Parser::ExpressionListContext *ctx)
{
    inFunccall = false;
}