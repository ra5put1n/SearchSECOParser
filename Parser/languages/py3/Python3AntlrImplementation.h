/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)*/

#pragma once

#include "../LanguageBase.h"

#include "generated/Python3Lexer.h"
#include "generated/Python3Parser.h"
#include "Python3ParserListenerCustom.h"

class Python3AntlrImplementation : public virtual LanguageBase
{
private:
	virtual antlr4::Lexer* lexer(antlr4::ANTLRInputStream* input) override
	{
		return new Python3Lexer(input);
	};

	virtual antlr4::Parser* parser(antlr4::CommonTokenStream* tokens) override
	{
		return new Python3Parser(tokens);
	};

	virtual antlr4::tree::ParseTreeListener* listener(antlr4::Parser* parser, antlr4::TokenStreamRewriter* tsr, std::string fileName) override
	{
		Python3Parser *pp = (Python3Parser *)parser;
		return new CustomPython3Listener(pp, tsr, fileName);
	};

	virtual antlr4::tree::ParseTree* tree(antlr4::Parser* p) override
	{
		Python3Parser *pp = (Python3Parser *)p;
		return pp->file_input();
	};

	virtual std::vector<HashData> getHashes(antlr4::tree::ParseTreeListener* e) override
	{
		CustomPython3Listener *cpl = (CustomPython3Listener *)e;
		return cpl->output;
	};
};