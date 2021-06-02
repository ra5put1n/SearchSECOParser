/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)*/

#pragma once

#include "../LanguageBase.h"

#include "generated/CLexer.h"
#include "generated/CParser.h"
#include "CParserListenerCustom.h"

class CAntlrImplementation : public virtual LanguageBase
{
private:
    virtual antlr4::Lexer* lexer(antlr4::ANTLRInputStream* input) override
	{
		return new CLexer(input);
	};
    virtual antlr4::Parser* parser(antlr4::CommonTokenStream* tokens) override
	{
		return new CParser(tokens);
	};
    virtual antlr4::tree::ParseTreeListener* listener(antlr4::Parser* parser, antlr4::TokenStreamRewriter* tsr, std::string fileName) override
	{
		CParser* cp = (CParser*)parser;
		return new CustomCListener(cp, tsr, fileName);
	};
    virtual antlr4::tree::ParseTree* tree(antlr4::Parser* p) override
	{
		CParser* cp = (CParser*) p;
		return cp->translationUnit();
	};
    virtual std::vector<HashData> getHashes(antlr4::tree::ParseTreeListener* e) override
	{
		CustomCListener* ccl = (CustomCListener*)e;
		return ccl->output;
	};
};