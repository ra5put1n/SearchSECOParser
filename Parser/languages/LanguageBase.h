#pragma once

#include <string>

#include "antlr4-runtime.h"
#include "../HashData.h"


class LanguageBase
{
public:
	std::vector<HashData> parseData(std::string data, std::string filePath)
	{
        antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(data);

        antlr4::Lexer* l = lexer(input);
        antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(l);
        tokens->fill();
        //for (auto token : tokens->getTokens()) {
        //    std::cout << token->toString() << std::endl;
        //}
        antlr4::Parser* p = parser(tokens);
        antlr4::TokenStreamRewriter* rewriter = new antlr4::TokenStreamRewriter(tokens);
        antlr4::tree::ParseTreeListener* e = listener(p, rewriter, filePath);

        antlr4::tree::ParseTree* t = tree(p);

        antlr4::tree::ParseTreeWalker::DEFAULT.walk(e, t);
        //std::cout << t->toStringTree(p, true) << std::endl;

        return getHashes(e);
	}

private:
	virtual antlr4::Lexer* lexer(antlr4::ANTLRInputStream* input) = 0;
    virtual antlr4::Parser* parser(antlr4::CommonTokenStream* tokens) = 0;
    virtual antlr4::tree::ParseTreeListener* listener(antlr4::Parser* parser, antlr4::TokenStreamRewriter* tsr, std::string fileName) = 0;
    virtual antlr4::tree::ParseTree* tree(antlr4::Parser* p) = 0;
    virtual std::vector<HashData> getHashes(antlr4::tree::ParseTreeListener* e) = 0;
};

