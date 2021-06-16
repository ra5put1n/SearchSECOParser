/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#pragma once

#include "../LanguageBase.h"

#include "generated/JavaScriptLexer.h"
#include "generated/JavaScriptParser.h"
#include "JavaScriptParserListenerCustom.h"

class JavaScriptAntlrImplementation : public virtual LanguageBase
{

public:
	virtual std::vector<HashData> parseData(std::string data, std::string filePath)
	{
		antlr4::ANTLRInputStream input(data);

		JavaScriptLexer l(&input);
		l.removeErrorListeners();
		antlr4::CommonTokenStream tokens(&l);

		try
		{
			tokens.fill();
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while tokenizing file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}

		JavaScriptParser p(&tokens);
		p.removeErrorListeners();
		antlr4::TokenStreamRewriter rewriter(&tokens);
		CustomJavaScriptListener e(&rewriter, filePath);
		antlr4::tree::ParseTree* t;

		try
		{
			t = p.program();
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while Parsing file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}

		try
		{
			antlr4::tree::ParseTreeWalker::DEFAULT.walk(&e, t);
		}
		catch (const std::exception& e)
		{
			std::string log = "Error while walking file: " + filePath + ", skipping \n Error: " + e.what();
			Logger::logWarn(log.c_str(), __FILE__, __LINE__);
			return std::vector<HashData>();
		}
		std::vector<HashData> hashes = std::vector<HashData>(*e.output);

		std::string log = "Finished parsing file: " + filePath + ", number of functions found: " + std::to_string(hashes.size());
		Logger::logDebug(log.c_str(), __FILE__, __LINE__);
		
		return hashes;
	}

	virtual void ClearCache()
	{
		// Simulate the building of the lexer and parser to create the objects.
		antlr4::ANTLRInputStream input("");

		JavaScriptLexer l(&input);
		l.removeErrorListeners();
		antlr4::CommonTokenStream tokens(&l);

		tokens.fill();

		JavaScriptParser p(&tokens);

		l.clearCache();
		p.clearCache();
	}
};