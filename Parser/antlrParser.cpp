/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
� Copyright Utrecht University(Department of Information and Computing Sciences)
*/

//#define ANTLR4CPP_STATIC
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING

#include <experimental/filesystem>
#include <fstream>
#include <iostream>
#include <thread>
#include <codecvt>
#include <cstring>

#include "antlr4-runtime.h"

#include "Logger.h"

#include "antlrParser.h"
#include "languages/LanguageBase.h"
#include "languages/c/CAntlrImplementation.h"
#include "languages/cpp/CPP14AntlrImplemenation.h"
#include "languages/py3/Python3AntlrImplemenation.h"

// Method practically copied from Spider Revisited.
std::vector<HashData> antlrParsing::parseDir(std::string repoPath)
{
	std::vector<HashData> meths;
	std::mutex outputLock;

	std::vector<std::thread> threads;

	// Thread-safe queue (with lock).
	std::queue<std::string> files;
	std::mutex queueLock;
	auto dirIter = std::experimental::filesystem::recursive_directory_iterator(repoPath);

	// Loop over all files.
	for (const auto &path : dirIter)
	{
		std::string s = (path.path()).string();
		if (path.path().has_extension())
		{
			files.push(s);
		}
	}

	// Construct threads to process the queue.
	for (int i = 0; i < MAX_THREADS; i++)
	{
		threads.push_back(std::thread(&antlrParsing::singleThread, std::ref(meths), std::ref(outputLock),
									  std::ref(files), std::ref(queueLock)));
	}

	// Wait on threads to finish.
	for (auto &th : threads)
	{
		th.join();
	}

	return meths;
}

void antlrParsing::singleThread(std::vector<HashData> &meths, std::mutex &outputLock, std::queue<std::string> &files,
								std::mutex &queueLock)
{
	while (true)
	{
		// Lock the queue.
		queueLock.lock();
		if (files.size() <= 0)
		{
			queueLock.unlock();
			return;
		}
		std::string file = files.front();
		files.pop();
		queueLock.unlock();
		parseSingleFile(file, meths, outputLock);
	}
}

LanguageBase* getFacade(std::string fileName)
{
	std::experimental::filesystem::path path = std::experimental::filesystem::path(fileName);
	/*if (path.extension() == ".c")
	{
		return new CAntlrImplementation();
	}
	else if (path.extension() == ".cpp" || path.extension() == ".hpp" || path.extension() == ".h")
	{
		return new CPP14AntlrImplemenation();
    }
    else*/ if (path.extension() == ".py")
    {
        return new Python3AntlrImplemenation();
    }
	else
	{
		return nullptr;
	}
}

std::string to_utf8(const std::string& str, const std::locale& loc = std::locale{})
{
	using wcvt = std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t>;
	std::u32string wstr(str.size(), U'\0');
	std::use_facet<std::ctype<char32_t>>(loc).widen(str.data(), str.data() + str.size(), &wstr[0]);
	return wcvt{}.to_bytes(wstr.data(), wstr.data() + wstr.size());
}

void antlrParsing::parseSingleFile(std::string filepath, std::vector<HashData> &meths, std::mutex &outputLock)
{
	std::ifstream file(filepath);
	if (file.is_open())
	{

		// Convert utf8 based on cdycdr's answer to https://stackoverflow.com/questions/17562736/how-to-convert-from-utf-8-to-ansi-using-standard-c.
		file.seekg(0, std::ios::end);
		size_t size = file.tellg();
		std::string buffer(size, ' ');
		file.seekg(0);
		file.read(&buffer[0], size);

		const char* bom = "\xef\xbb\xbf";
		std::string data;

		if (buffer.length() >= 3 && strncmp(buffer.c_str(), bom, 3) == 0)
		{
			data = buffer;
		}
		else
		{
			try
			{
				data = to_utf8(buffer);
			}
			catch (const std::exception& e) 
			{
				std::string log = "Can't convert file" + filepath + " to utf-8, skipping \n Error: " + e.what();
				Logger::logWarn(log.c_str(), __FILE__, __LINE__);
				return;
			}
		}

		LanguageBase* lf = getFacade(filepath);

		if (lf == nullptr)
		{
			std::string log = "Can't find parser for file " + filepath + ", skipping";
			Logger::logInfo(log.c_str(), __FILE__, __LINE__);
			return;
		}
		 
		//antlr4::ANTLRInputStream *input = new antlr4::ANTLRInputStream(data);

		////// Lexing:
		////CPP14Lexer *lexer = new CPP14Lexer(input); // CLexer was generated by previous step
		////// lexer->removeErrorListeners();
		////antlr4::CommonTokenStream *tokens = new antlr4::CommonTokenStream(lexer);
		////tokens->fill();

		/////*for (auto token : tokens->getTokens()) {
		////    std::cout << token->toString() << std::endl;
		////}*/

		////// Parsing:
		////CPP14Parser *parser = new CPP14Parser(tokens); // CParser was generated by previous step
		////// parser->removeErrorListeners();
		////antlr4::TokenStreamRewriter *rewriter = new antlr4::TokenStreamRewriter(tokens);
		////CustomCPP14Listener *extractor = new CustomCPP14Listener(parser, rewriter); // Custom listener class

		//CLexer *lexer = new CLexer(input);
		//antlr4::CommonTokenStream *tokens = new antlr4::CommonTokenStream(lexer);
		//tokens->fill();

		//CParser *parser = new CParser(tokens);
		//antlr4::TokenStreamRewriter *rewriter = new antlr4::TokenStreamRewriter(tokens);
		//CustomCListener *extractor = new CustomCListener(parser, rewriter, filepath);

		//// parser->addParseListener(extractor);

		//antlr4::tree::ParseTree *tree = parser->translationUnit();

		//antlr4::tree::ParseTreeWalker::DEFAULT.walk(extractor, tree);

		std::vector<HashData> output = lf->parseData(data, filepath);

		outputLock.lock();
		meths.insert(meths.end(), output.begin(), output.end());
		outputLock.unlock();

		/*for (HashData s : meths)
		{
			std::cout << s.hash << std::endl << std::endl;
		}*/

		//std::cout << tree->toStringTree(parser, true) << std::endl;

		file.close();
	}
	else
	{
		std::string log = "Can't open file: " + filepath + ", skipping";
		Logger::logWarn(log.c_str(), __FILE__, __LINE__);
	}
}



