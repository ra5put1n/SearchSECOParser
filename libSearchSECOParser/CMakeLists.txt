# This program has been developed by students from the bachelor Computer Science at
# Utrecht University within the Software Project course.
# © Copyright Utrecht University (Department of Information and Computing Sciences)

project(libSearchSECOParser)
set(CMAKE_CXX_STANDARD 17)

message("Building the parser...")
if(NOT DEFINED LOGURU_INCLUDED)
   set(LOGURU_FILES
   loguru/loguru.hpp
   loguru/loguru.cpp
   )
   set(LOGURU_INCLUDED true PARENT_SCOPE)
   message("Including loguru files...")
endif()

set(PARSER_HEADER_LIST
   AbstractSyntaxToHashable.h
   AntlrParser.h
   HashData.h
   Logger.h
   Node.h
   Parser.h
   SrcMLCaller.h
   StringStream.h
   Tag.h
   XmlParser.h
   ./md5/md5.h
   ./languages/py3/Python3AntlrImplementation.h
   ./languages/py3/Python3ParserListenerCustom.h
   ./languages/py3/generated/Python3BaseListener.h
   ./languages/py3/generated/Python3BaseVisitor.h
   ./languages/py3/generated/Python3Lexer.h
   ./languages/py3/generated/Python3Listener.h
   ./languages/py3/generated/Python3Parser.h
   ./languages/py3/generated/Python3Visitor.h
   ./languages/js/JavaScriptAntlrImplementation.h
   ./languages/js/JavaScriptParserListenerCustom.h
   ./languages/js/generated/JavaScriptLexer.h
   ./languages/js/generated/JavaScriptLexerBase.h
   ./languages/js/generated/JavaScriptParser.h
   ./languages/js/generated/JavaScriptParserBase.h
   ./languages/js/generated/JavaScriptParserBaseListener.h
   ./languages/js/generated/JavaScriptParserBaseVisitor.h
   ./languages/js/generated/JavaScriptParserListener.h
   ./languages/js/generated/JavaScriptParserVisitor.h
)


add_library(libSearchSECOParser
  AbstractSyntaxToHashable.cpp
  AntlrParser.cpp
  Logger.cpp
  Node.cpp
  Parser.cpp
  SrcMLCaller.cpp
  StringStream.cpp
  Tag.cpp
  XmlParser.cpp
  ./md5/md5.cpp
  ./languages/py3/Python3AntlrImplementation.cpp
  ./languages/py3/Python3ParserListenerCustom.cpp
  ./languages/py3/generated/Python3BaseListener.cpp
  ./languages/py3/generated/Python3BaseVisitor.cpp
  ./languages/py3/generated/Python3Lexer.cpp
  ./languages/py3/generated/Python3Listener.cpp
  ./languages/py3/generated/Python3Parser.cpp
  ./languages/py3/generated/Python3Visitor.cpp
  ./languages/js/JavaScriptAntlrImplementation.cpp
  ./languages/js/JavaScriptParserListenerCustom.cpp
  ./languages/js/generated/JavaScriptLexer.cpp
  ./languages/js/generated/JavaScriptLexerBase.cpp
  ./languages/js/generated/JavaScriptParser.cpp
  ./languages/js/generated/JavaScriptParserBase.cpp
  ./languages/js/generated/JavaScriptParserBaseListener.cpp
  ./languages/js/generated/JavaScriptParserBaseVisitor.cpp
  ./languages/js/generated/JavaScriptParserListener.cpp
  ./languages/js/generated/JavaScriptParserVisitor.cpp
  ${PARSER_HEADER_LIST}
  ${LOGURU_FILES}
)

if(WIN32)
  find_library(antlr REQUIRED NAMES antlr4-runtime PATHS ../external/antlr/lib/release)
  target_link_libraries(libSearchSECOParser PUBLIC ${antlr})
  target_include_directories(libSearchSECOParser PUBLIC ../external/antlr/src)
else()
  find_library(antlr REQUIRED NAMES antlr antlr4 antlr4-runtime)
  target_link_libraries(libSearchSECOParser PRIVATE ${antlr} stdc++fs)
  include_directories(/usr/include/antlr4-runtime)
endif()
