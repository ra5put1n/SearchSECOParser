/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#include "antlr4-runtime.h"

#include "CPP14ParserListenerCustom.h"

#include "../../md5/md5.h"

CustomCPP14Listener::CustomCPP14Listener(CPP14Parser *parser, antlr4::TokenStreamRewriter *tsr)
{
    this->parser = parser;
    this->tsr = tsr;
    start = 0;
    stop = 0;
}

void CustomCPP14Listener::enterFunctionDefinition(CPP14Parser::FunctionDefinitionContext *ctx)
{
    // antlr4::CommonToken test = parser->getCurrentToken();
    // test.setText("test");
    // antlr4::TokenStream* tokens = parser->getTokenStream();
    inHeader = true;
    functionName = "";
    start = ctx->start->getLine();
    // type = tokens->getText(ctx->declarator()->getSourceInterval());

    // output[output.size() - 1].append(type);
    /*for (antlr4::tree::parsetree* i : ch)
    {
            std::cout << i->tostring();
    }*/
}

void CustomCPP14Listener::exitFunctionDefinition(CPP14Parser::FunctionDefinitionContext *ctx)
{
    stop = ctx->stop->getLine();
    std::cout << functionBody << std::endl << std::endl;
    output.push_back(HashData(md5(functionBody), functionName, fileName, start, stop));
    inFunction = false;
}

void CustomCPP14Listener::enterFunctionSpecifier(CPP14Parser::FunctionSpecifierContext *ctx)
{
    // std::string content = tsr->getText(ctx->getSourceInterval());
    /*stop = ctx->stop->getStopIndex();

    HashData* test = new HashData(content, functionName, fileName, start, stop);
    output.push_back(test);
    inFunction = false;*/
}

void CustomCPP14Listener::enterFunctionBody(CPP14Parser::FunctionBodyContext *ctx)
{
    // std::string content = tsr->getText(ctx->getSourceInterval());
    /*stop = ctx->stop->getStopIndex();

    HashData* test = new HashData(content, functionName, fileName, start, stop);
    output.push_back(test);*/
    inHeader = false;
}

void CustomCPP14Listener::exitFunctionBody(CPP14Parser::FunctionBodyContext *ctx)
{
    std::string body = tsr->getText(ctx->getSourceInterval());
    functionBody = body; // body.erase(0, 1).erase(body.size() - 2, body.size() - 1);
}

void CustomCPP14Listener::enterPostfixExpression(CPP14Parser::PostfixExpressionContext *ctx)
{
    // std::cout << "enterPost " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;
    int test = ctx->children.size();
    if (test > 1)
    {
        functionCalls.push(ctx->children[1]->toString());
        inFunccall = true;
    }
    else
    {
        functionCalls.push("");
    }
    return;
    if (funccallName == "")
    {
        funccallName = ctx->start->getText();
        /*
        if (funccallTokens.find(ctx->start->getText()) != funccallTokens.end() && funccallTokens[ctx->start->getText()]
        != nullptr)
        {
                tsr->replace(funccallTokens[ctx->start->getText()], "funccall");
                funccallTokens.erase(ctx->start->getText());
        }*/
        // funccallName = ;
        // inFunccall = true;
    }
}

void CustomCPP14Listener::exitPostfixExpression(CPP14Parser::PostfixExpressionContext *ctx)
{
    functionCalls.pop();
    inFunccall = false;
    funccallName = "";
    return;
    /*
    posfixDepth--;

    std::cout << "exitPost " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;
    */
    /*
    inFunccall = false;
    if (ctx->start->getText() == funccallName)
    {


            //funccallName = "";
            //inFunccall = false;
    }*/
}


void CustomCPP14Listener::enterDeclarator(CPP14Parser::DeclaratorContext *ctx)
{
    antlr4::Token *tk = ctx->start;
    tsr->replace(tk, "decl");

    /*if (inHeader && functionName == "")
    {
        functionName = ctx->start->getText();
    }*/

    /*if (tk->getType() == 105 && ctx->children.size() == 1)
    {
    }*/
}

void CustomCPP14Listener::enterUnqualifiedId(CPP14Parser::UnqualifiedIdContext *ctx)
{
    if (inHeader && functionName == "")
    {
        functionName = ctx->start->getText();
    }
}

void CustomCPP14Listener::exitUnqualifiedId(CPP14Parser::UnqualifiedIdContext *ctx)
{
}

void CustomCPP14Listener::enterIdExpression(CPP14Parser::IdExpressionContext *ctx)
{
    if (functionCalls.empty())
        return;
    std::string top = functionCalls.top();
    functionCalls.pop();

    if (!functionCalls.empty() && (functionCalls.top() == "(" && (inFunccall || (top == "." || top == "->"))))
    {
        tsr->replace(ctx->start, "funccall");
    }
    else
    {
        tsr->replace(ctx->start, "var");
    }
    functionCalls.push(top);
}

void CustomCPP14Listener::exitIdExpression(CPP14Parser::IdExpressionContext *ctx)
{
}

void CustomCPP14Listener::enterExpressionList(CPP14Parser::ExpressionListContext *ctx)
{
    inFunccall = false;
}

void CustomCPP14Listener::exitExpressionList(CPP14Parser::ExpressionListContext *ctx)
{
}