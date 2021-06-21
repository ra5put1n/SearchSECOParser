/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#pragma once

#include "../../HashData.h"
#include "antlr4-runtime.h"
#include "generated/Python3BaseListener.h"
#include <stack>

#include <map>

/**
 * This class provides an empty implementation of CListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class CustomPython3Listener : public Python3BaseListener
{
  public:
	std::vector<HashData> *output;

	CustomPython3Listener(antlr4::TokenStreamRewriter *tsr, std::string fileName);

	~CustomPython3Listener();

	virtual void enterFuncdef(Python3Parser::FuncdefContext *ctx) override;
	virtual void exitFuncdef(Python3Parser::FuncdefContext *ctx) override;

	virtual void enterFuncbody(Python3Parser::FuncbodyContext *ctx) override;
	virtual void exitFuncbody(Python3Parser::FuncbodyContext *ctx) override;

	virtual void enterName(Python3Parser::NameContext *ctx) override;

	virtual void enterFunccallname(Python3Parser::FunccallnameContext *ctx) override;

	virtual void enterExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx) override;
	virtual void exitExpr_stmt_single(Python3Parser::Expr_stmt_singleContext *ctx) override;

	virtual void enterString(Python3Parser::StringContext *ctx) override;

  private:
	antlr4::TokenStreamRewriter *baseTsr;
	std::stack<antlr4::TokenStreamRewriter *> tsrs;
	std::stack<size_t> starts;
	std::stack<std::string> functionNames, functionBodies;
	size_t start, stop;
	std::string functionName, functionBody, fileName = "filenametest";
	bool inFunction = false, inSingleStatement = false;
};
