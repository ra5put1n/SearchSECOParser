#pragma once


#include "antlr4-runtime.h"
#include "generated/CPP14ParserBaseListener.h"
#include "../../HashData.h"


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


	virtual void enterPrimaryExpression(CPP14Parser::PrimaryExpressionContext* ctx) override;
	virtual void exitPrimaryExpression(CPP14Parser::PrimaryExpressionContext* ctx) override;

	virtual void enterDeclarator(CPP14Parser::DeclaratorContext* ctx) override;


private:
	CPP14Parser* parser;
	antlr4::TokenStreamRewriter* tsr;
	size_t start, stop;
	std::map<std::string,antlr4::Token*> funccallTokens;
	std::string functionName, functionBody, fileName = "filenametest", funccallName = "";
	bool inFunction = false, inHeader = false, inFunccall = false;

	int posfixDepth = 0;
};