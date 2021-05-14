/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#pragma once


#include "antlr4-runtime.h"
#include "generated/CPP14ParserBaseListener.h"
#include "../../HashData.h"
#include <stack>


#include <map>

/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CustomCPP14Listener : public CPP14ParserBaseListener
{
public:
	std::vector<HashData> output;

	CustomCPP14Listener(CPP14Parser* parser, antlr4::TokenStreamRewriter* tsr);
	
	virtual void enterFunctionDefinition(CPP14Parser::FunctionDefinitionContext* ctx) override;
	virtual void exitFunctionDefinition(CPP14Parser::FunctionDefinitionContext* ctx) override;
	
	virtual void enterFunctionSpecifier(CPP14Parser::FunctionSpecifierContext* ctx) override;

	virtual void enterFunctionBody(CPP14Parser::FunctionBodyContext* ctx) override;
	virtual void exitFunctionBody(CPP14Parser::FunctionBodyContext* ctx) override;

	virtual void enterPostfixExpression(CPP14Parser::PostfixExpressionContext* ctx) override;
	virtual void exitPostfixExpression(CPP14Parser::PostfixExpressionContext* ctx) override;

	virtual void enterUnqualifiedId(CPP14Parser::UnqualifiedIdContext *ctx) override;
    virtual void exitUnqualifiedId(CPP14Parser::UnqualifiedIdContext *ctx) override;

	virtual void enterIdExpression(CPP14Parser::IdExpressionContext *ctx) override;
    virtual void exitIdExpression(CPP14Parser::IdExpressionContext *ctx) override;

	virtual void enterExpressionList(CPP14Parser::ExpressionListContext *ctx) override;
    virtual void exitExpressionList(CPP14Parser::ExpressionListContext *ctx) override;

	virtual void enterDeclarator(CPP14Parser::DeclaratorContext* ctx) override;


private:
	CPP14Parser* parser;
	antlr4::TokenStreamRewriter* tsr;
	size_t start, stop;
	std::map<std::string,antlr4::Token*> funccallTokens;
	std::string functionName, functionBody, fileName = "filenametest", funccallName = "";
	bool inFunction = false, inHeader = false, inFunccall = false;

    std::stack<std::string> functionCalls = {};
};