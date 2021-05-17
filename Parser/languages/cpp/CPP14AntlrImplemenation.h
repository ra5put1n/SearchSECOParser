#pragma once

#include "../LanguageBase.h"

#include "generated/CPP14Lexer.h"
#include "generated/CPP14Parser.h"
#include "CPP14ParserListenerCustom.h"

class CPP14AntlrImplemenation : public virtual LanguageBase
{
private:
	virtual antlr4::Lexer* lexer(antlr4::ANTLRInputStream* input) override
	{
		return new CPP14Lexer(input);
	};
	virtual antlr4::Parser* parser(antlr4::CommonTokenStream* tokens) override
	{
		return new CPP14Parser(tokens);
	};
	virtual antlr4::tree::ParseTreeListener* listener(antlr4::Parser* parser, antlr4::TokenStreamRewriter* tsr, std::string fileName) override
	{
		CPP14Parser* cp = (CPP14Parser*)parser;
		return new CustomCPP14Listener(cp, tsr, fileName);
	};
	virtual antlr4::tree::ParseTree* tree(antlr4::Parser* p) override
	{
		CPP14Parser* cp = (CPP14Parser*)p;
		return cp->translationUnit();
	};
	virtual std::vector<HashData> getHashes(antlr4::tree::ParseTreeListener* e) override
	{
		CustomCPP14Listener* ccl = (CustomCPP14Listener*)e;
		return ccl->output;
	};
};