

set(PARSER_HEADER_LIST
   AbstractSyntaxToHashable.h
   antlrParser.h
   HashData.h
   Node.h
   Parser.h
   SrcMLCaller.h
   StringStream.h
   Tag.h
   XmlParser.h
   ./md5/md5.h
   ./loguru/loguru.hpp
   ./languages/c/CAntlrImplementation.h
   ./languages/c/CParserListenerCustom.h
   ./languages/c/generated/CBaseListener.h
   ./languages/c/generated/CBaseVisitor.h
   ./languages/c/generated/CLexer.h
   ./languages/c/generated/CListener.h
   ./languages/c/generated/CParser.h
   ./languages/c/generated/CVisitor.h
   ./languages/cpp/CPP14AntlrImplementation.h
   ./languages/cpp/CPP14ParserListenerCustom.h
   ./languages/cpp/generated/CPP14ParserBaseListener.h
   ./languages/cpp/generated/CPP14ParserBaseVisitor.h
   ./languages/cpp/generated/CPP14Lexer.h
   ./languages/cpp/generated/CPP14ParserListener.h
   ./languages/cpp/generated/CPP14Parser.h
   ./languages/cpp/generated/CPP14ParserVisitor.h
   ./languages/py3/Python3AntlrImplementation.h
   ./languages/py3/Python3ParserListenerCustom.h
   ./languages/py3/generated/Python3ParserBaseListener.h
   ./languages/py3/generated/Python3ParserBaseVisitor.h
   ./languages/py3/generated/Python3Lexer.h
   ./languages/py3/generated/Python3ParserListener.h
   ./languages/py3/generated/Python3Parser.h
   ./languages/py3/generated/CPython3ParserVisitor.h
)


add_library(parser
  AbstractSyntaxToHashable.cpp
  antlrParser.cpp
  Node.cpp
  Parser.cpp
  SrcMLCaller.cpp
  StringStream.cpp
  Tag.cpp
  XmlParser.cpp
  ./md5/md5.cpp
  ./loguru/loguru.cpp
  ./languages/c/CParserListenerCustom.cpp
  ./languages/c/generated/CBaseListener.cpp
  ./languages/c/generated/CBaseVisitor.cpp
  ./languages/c/generated/CLexer.cpp
  ./languages/c/generated/CListener.cpp
  ./languages/c/generated/CParser.cpp
  ./languages/c/generated/CVisitor.cpp
  ./languages/cpp/CPP14ParserListenerCustom.cpp
  ./languages/cpp/generated/CPP14ParserBaseListener.cpp
  ./languages/cpp/generated/CPP14ParserBaseVisitor.cpp
  ./languages/cpp/generated/CPP14Lexer.cpp
  ./languages/cpp/generated/CPP14ParserListener.cpp
  ./languages/cpp/generated/CPP14Parser.cpp
  ./languages/cpp/generated/CPP14ParserVisitor.cpp
  ./languages/py3/Python3ParserListenerCustom.cpp
  ./languages/py3/generated/Python3ParserBaseListener.cpp
  ./languages/py3/generated/Python3ParserBaseVisitor.cpp
  ./languages/py3/generated/Python3Lexer.cpp
  ./languages/py3/generated/Python3ParserListener.cpp
  ./languages/py3/generated/Python3Parser.cpp
  ./languages/py3/generated/Python3ParserVisitor.cpp
  ${PARSER_HEADER_LIST}
)

if(WIN32)
  find_library(antlr NAMES antlr4-runtime PATHS ../lib/release)
  target_link_libraries(parser PUBLIC ${antlr})
  target_include_directories(parser PUBLIC ../src)
else()
  find_library(antlr NAMES antlr antlr4 antlr4-runtime)
  target_link_libraries(parser PUBLIC ${antlr} stdc++fs)
  include_directories(/usr/include/antlr4-runtime)
endif()


