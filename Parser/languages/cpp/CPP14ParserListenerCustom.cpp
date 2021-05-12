

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
    functionBody = body.erase(0, 1).erase(body.size() - 2, body.size() - 1);
}

void CustomCPP14Listener::enterPostfixExpression(CPP14Parser::PostfixExpressionContext *ctx)
{
    // std::cout << "enterPost " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;
    int test = ctx->children.size();
    if (test > 1 && ctx->children[1]->toString() == "(")
    {
        functionCalls.push(true);
    }
    else
    {
        functionCalls.push(false);
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
    funccallName = "";
    inFunccall = false;
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

// void CustomCPP14Listener::enterPostfixBracketedExpression(CPP14Parser::PostfixBracketedExpressionContext *ctx)
//{
//    // std::cout << "enterPost " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;
//    funccallName = ctx->parent->children[0]->getText();
//    std::cout << funccallName << std::endl << std::endl;
//    auto brother = (CPP14Parser::PostfixExpressionContext *)ctx->parent;
//    tsr->replace(brother->start, "funccall");
//    /*
//    if (funccallTokens.find(ctx->start->getText()) != funccallTokens.end() && funccallTokens[ctx->start->getText()]
//    != nullptr)
//    {
//            tsr->replace(funccallTokens[ctx->start->getText()], "funccall");
//            funccallTokens.erase(ctx->start->getText());
//    }*/
//    // funccallName = ;
//    // inFunccall = true;
//    inFunccall = true;
//}
//
// void CustomCPP14Listener::exitPostfixBracketedExpression(CPP14Parser::PostfixBracketedExpressionContext *ctx)
//{
//    funccallName = "";
//    inFunccall = false;
//    /*
//    posfixDepth--;
//
//    std::cout << "exitPost " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;
//    */
//    /*
//    inFunccall = false;
//    if (ctx->start->getText() == funccallName)
//    {
//
//
//            //funccallName = "";
//            //inFunccall = false;
//    }*/
//}

void CustomCPP14Listener::enterPrimaryExpression(CPP14Parser::PrimaryExpressionContext *ctx)
{
    // std::cout << "enterPrimExpr " << ctx->start->getText() << " children " << ctx->children.size() << std::endl;

    antlr4::Token *tk = ctx->start;
    if (tk->getType() == 132 && ctx->children.size() > 0)
    {
        /*CPP14Parser::PostfixExpressionContext* sldkfj = (CPP14Parser::PostfixExpressionContext *) ctx->parent;
        std::string count = ctx->parent->getText();*/
        if (inFunccall)
        {
            // tsr->replace(tk, "funccall");
        }
        else
        {
            // tsr->replace(tk, "var");
        }
    }
}

void CustomCPP14Listener::exitPrimaryExpression(CPP14Parser::PrimaryExpressionContext *ctx)
{
}

void CustomCPP14Listener::enterDeclarator(CPP14Parser::DeclaratorContext *ctx)
{
    antlr4::Token *tk = ctx->start;
    // tsr->replace(tk, "decl");

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
    bool top = functionCalls.top();
    functionCalls.pop();

    if (!functionCalls.empty() && functionCalls.top())
    {
        tsr->replace(ctx->start, "funccall");
    }
    functionCalls.push(top);
}

void CustomCPP14Listener::exitIdExpression(CPP14Parser::IdExpressionContext *ctx)
{
}

/*
void CustomCListener::enterTypeSpecifier(CParser::TypeSpecifierContext* ctx)
{
        //ctx.
        //ctx->getToken*
        if (ctx->children.size() == 1)
        {
                tsr->replace(ctx->start, "type");
        }
}



void CustomCListener::enterDirectDeclarator(CParser::DirectDeclaratorContext* ctx)
{
        antlr4::Token* tk = ctx->start;
        if (tk->getType() == 105 && ctx->children.size() == 1)
        {
                tsr->replace(tk, "decl");
        }
}

void CustomCListener::enterCompoundStatement(CParser::CompoundStatementContext* ctx)
{
        inHeader = false;
        inFunction = true;
}


void CustomCListener::visitTerminal(antlr4::tree::TerminalNode* node)
{

}

//void CustomCListener::enterTypeQualifier(CParser::TypeQualifierContext* ctx)
//{
//	std::vector<antlr4::tree::ParseTree*> ch = ctx->children;
//	for (antlr4::tree::ParseTree* i : ch)
//	{
//		std::cout << i->toString();
//	}
//}
//
//void CustomCListener::enterDeclarator(CParser::DeclaratorContext* ctx)
//{
//	std::vector<antlr4::tree::ParseTree*> ch = ctx->children;
//	for (antlr4::tree::ParseTree* i : ch)
//	{
//		std::cout << i->toString();
//	}
//}
//
//void CustomCListener::enterDeclaration(CParser::DeclarationContext* ctx)
//{
//	std::vector<antlr4::tree::ParseTree*> ch = ctx->children;
//	for (antlr4::tree::ParseTree* i : ch)
//	{
//		std::cout << i->toString();
//	}
//}
*/