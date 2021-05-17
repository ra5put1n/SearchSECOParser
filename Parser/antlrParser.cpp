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

#include "antlr4-runtime.h"

#include "antlrParser.h"
#include "languages/cpp/CPP14ParserListenerCustom.h"
#include "languages/cpp/generated/CPP14Lexer.h"
#include "languages/cpp/generated/CPP14Parser.h"
#include "languages/c/CParserListenerCustom.h"
#include "languages/c/generated/CLexer.h"
#include "languages/c/generated/CParser.h"

std::vector<HashData> antlrParsing::parseFile(std::string repoPath)
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
            /*if (path.path().extension() == ".cpp" || path.path().extension() == ".hpp" || path.path().extension() == ".h")
            {*/
                files.push(s);
            //}
        }
    }

    // Construct threads to process the queue.
    for (int i = 0; i < 16; i++)
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
            data = to_utf8(buffer);
        }

        antlr4::ANTLRInputStream *input = new antlr4::ANTLRInputStream(data);

        //// Lexing:
        //CPP14Lexer *lexer = new CPP14Lexer(input); // CLexer was generated by previous step
        //// lexer->removeErrorListeners();
        //antlr4::CommonTokenStream *tokens = new antlr4::CommonTokenStream(lexer);
        //tokens->fill();

        ///*for (auto token : tokens->getTokens()) {
        //    std::cout << token->toString() << std::endl;
        //}*/

        //// Parsing:
        //CPP14Parser *parser = new CPP14Parser(tokens); // CParser was generated by previous step
        //// parser->removeErrorListeners();
        //antlr4::TokenStreamRewriter *rewriter = new antlr4::TokenStreamRewriter(tokens);
        //CustomCPP14Listener *extractor = new CustomCPP14Listener(parser, rewriter); // Custom listener class

        CLexer *lexer = new CLexer(input);
        antlr4::CommonTokenStream *tokens = new antlr4::CommonTokenStream(lexer);
        tokens->fill();

        CParser *parser = new CParser(tokens);
        antlr4::TokenStreamRewriter *rewriter = new antlr4::TokenStreamRewriter(tokens);
        CustomCListener *extractor = new CustomCListener(parser, rewriter);

        // parser->addParseListener(extractor);

        antlr4::tree::ParseTree *tree = parser->translationUnit();

        antlr4::tree::ParseTreeWalker::DEFAULT.walk(extractor, tree);

        outputLock.lock();
        meths.insert(meths.end(), (extractor->output).begin(), (extractor->output).end());
        outputLock.unlock();

        /*for (HashData s : meths)
        {
            std::cout << s.hash << std::endl << std::endl;
        }*/

        //std::cout << tree->toStringTree(parser, true) << std::endl;

        file.close();
    }
}
