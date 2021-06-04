/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)*/

#pragma once

#include <string>

#include "antlr4-runtime.h"
#include "../HashData.h"
#include "../Logger.h"

class LanguageBase
{
public:
	std::vector<HashData> parseData(std::string data, std::string filePath)
	{
		antlr4::ANTLRInputStream* input = new antlr4::ANTLRInputStream(data);

		antlr4::Lexer* l = lexer(input);
		l->removeErrorListeners();
		antlr4::CommonTokenStream* tokens = new antlr4::CommonTokenStream(l);

		try
		{
			tokens->fill();
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while tokenizing file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}

		antlr4::Parser* p = parser(tokens);
		p->removeErrorListeners();
		antlr4::TokenStreamRewriter* rewriter = new antlr4::TokenStreamRewriter(tokens);
		antlr4::tree::ParseTreeListener* e = listener(p, rewriter, filePath);
		antlr4::tree::ParseTree* t;

		try
		{
			t = tree(p);
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while Parsing file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}       

		try
		{
			antlr4::tree::ParseTreeWalker::DEFAULT.walk(e, t);
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while walking file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}

		std::vector<HashData> hashes = getHashes(e);

		std::string log = "Finished parsing file: " + filePath + ", number of functions found: " + std::to_string(hashes.size());
		Logger::logDebug(log.c_str(), __FILE__, __LINE__);

		return hashes;
	}

private:
	virtual antlr4::Lexer* lexer(antlr4::ANTLRInputStream* input) = 0;
	virtual antlr4::Parser* parser(antlr4::CommonTokenStream* tokens) = 0;
	virtual antlr4::tree::ParseTreeListener* listener(antlr4::Parser* parser, antlr4::TokenStreamRewriter* tsr, std::string fileName) = 0;
	virtual antlr4::tree::ParseTree* tree(antlr4::Parser* p) = 0;
	virtual std::vector<HashData> getHashes(antlr4::tree::ParseTreeListener* e) = 0;
};

