/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/
#pragma once

#include "../LanguageBase.h"
#include "generated/Python3Lexer.h"
#include "generated/Python3Parser.h"
#include "Python3ParserListenerCustom.h"

class Python3AntlrImplementation : public virtual LanguageBase
{
public:
	/// <summary>
	/// Parses the data given using ANTLR, returns found methods.
	/// </summary>
	/// <param name="data">File content in UTF-8 format.</param>
	/// <param name="filePath">Location of file.</param>
	/// <returns>Vector of HashData containing info on found methods.</returns>
	virtual std::vector<HashData> parseData(std::string data, std::string filePath)
	{
		antlr4::ANTLRInputStream input(data);

		Python3Lexer l(&input);
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

		Python3Parser p(&tokens);
		p.removeErrorListeners();
		antlr4::TokenStreamRewriter rewriter(&tokens);
		CustomPython3Listener e(&rewriter, filePath);
		antlr4::tree::ParseTree* t;

		try
		{
			t = p.file_input();
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

	/// <summary>
	/// Clears the cache of the ANTLR parser and lexer, to free memory.
	/// </summary>
	virtual void ClearCache()
	{
		// Simulate the building of the lexer and parser to create the objects.
		antlr4::ANTLRInputStream input("");

		Python3Lexer l(&input);
		l.removeErrorListeners();
		antlr4::CommonTokenStream tokens(&l);

		tokens.fill();

		Python3Parser p(&tokens);

		l.clearCache();
		p.clearCache();
	}
};