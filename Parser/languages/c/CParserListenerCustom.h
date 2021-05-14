/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#pragma once


#include "antlr4-runtime.h"
#include "generated/CBaseListener.h"
#include "../../HashData.h"

class CustomCListener : public CBaseListener
{
  public:
    std::vector<HashData> output;

    CustomCListener(CParser *parser, antlr4::TokenStreamRewriter *tsr);
    
	virtual void enterFunctionDefinition(CParser::FunctionDefinitionContext *ctx) override;
    virtual void exitFunctionDefinition(CParser::FunctionDefinitionContext *ctx) override;

    virtual void enterCompoundStatement(CParser::CompoundStatementContext *ctx) override;
    virtual void exitCompoundStatement(CParser::CompoundStatementContext *ctx) override;

    virtual void enterPostfixExpression(CParser::PostfixExpressionContext *ctx) override;
    virtual void exitPostfixExpression(CParser::PostfixExpressionContext *ctx) override;

    virtual void enterDeclarator(CParser::DeclaratorContext *ctx) override;

    virtual void enterIdentifier(CParser::IdentifierContext *ctx) override;

    virtual void enterArgumentExpressionList(CParser::ArgumentExpressionListContext *ctx) override;

  private:
    CParser *parser;
    antlr4::TokenStreamRewriter *tsr;
    size_t start, stop;
    std::map<std::string, antlr4::Token *> funccallTokens;
    std::string functionName, functionBody, fileName = "filenametest", funccallName = "";
    bool inFunction = false, inHeader = false, inFunccall = false;

    std::stack<std::string> postfixOpeningTokens = {};
};
