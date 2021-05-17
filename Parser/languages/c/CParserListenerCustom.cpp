/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "CParserListenerCustom.h"
#include "../../md5/md5.h"

CustomCListener::CustomCListener(CParser *parser, antlr4::TokenStreamRewriter *tsr)
{
    this->parser = parser;
    this->tsr = tsr;
    start = 0;
    stop = 0;
}

void CustomCListener::enterFunctionDefinition(CParser::FunctionDefinitionContext *ctx)
{
    inHeader = true;
    functionName = "";
    start = ctx->start->getLine();
}

void CustomCListener::exitFunctionDefinition(CParser::FunctionDefinitionContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionBody << std::endl << std::endl;
    output.push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    inFunction = false;
}

void CustomCListener::enterCompoundStatement(CParser::CompoundStatementContext *ctx)
{
    inHeader = false;
}

void CustomCListener::exitCompoundStatement(CParser::CompoundStatementContext *ctx)
{
    functionBody = tsr->getText(ctx->getSourceInterval());
}

void CustomCListener::enterPostfixExpression(CParser::PostfixExpressionContext *ctx)
{
    int numChildren = ctx->children.size();
    if (numChildren > 1)
    {
        postfixOpeningTokens.push(ctx->children[1]->toString());
        inFunccall = true;

        if (ctx->children[1]->toString() == "(" && funccallName == "")
        {
            funccallName = ctx->start->getText();
            //std::cout << funccallName << std::endl;
        }
    }
    else
    {
        postfixOpeningTokens.push("");
    }
}

void CustomCListener::exitPostfixExpression(CParser::PostfixExpressionContext *ctx)
{
    postfixOpeningTokens.pop();
    inFunccall = false;
    funccallName = "";
    return;
}


void CustomCListener::enterDeclarator(CParser::DeclaratorContext *ctx)
{
    antlr4::Token *tk = ctx->start;
    tsr->replace(tk, "decl");
}

void CustomCListener::enterDirectDeclarator(CParser::DirectDeclaratorContext *ctx)
{
    if (inHeader && functionName == "")
    {
        functionName = ctx->start->getText();
    }
}

void CustomCListener::enterIdentifier(CParser::IdentifierContext *ctx)
{
    if (postfixOpeningTokens.empty())
        return;
    std::string top = postfixOpeningTokens.top();
    //postfixOpeningTokens.pop();

    if (!postfixOpeningTokens.empty() &&
        (postfixOpeningTokens.top() == "(" && (inFunccall || (top == "." || top == "->"))))
    {
        tsr->replace(ctx->start, "funccall");
    }
    else
    {
        tsr->replace(ctx->start, "var");
    }
    //postfixOpeningTokens.push(top);
}

void CustomCListener::enterArgumentExpressionList(CParser::ArgumentExpressionListContext *ctx)
{
    inFunccall = false;
}