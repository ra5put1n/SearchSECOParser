# This program has been developed by students from the bachelor Computer Science at
# Utrecht University within the Software Project course.
# © Copyright Utrecht University (Department of Information and Computing Sciences)

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
   antlrParser.h
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
)


add_library(parser
  AbstractSyntaxToHashable.cpp
  antlrParser.cpp
  Logger.cpp
  Node.cpp
  Parser.cpp
  SrcMLCaller.cpp
  StringStream.cpp
  Tag.cpp
  XmlParser.cpp
  ./md5/md5.cpp
  ./languages/py3/Python3ParserListenerCustom.cpp
  ./languages/py3/generated/Python3BaseListener.cpp
  ./languages/py3/generated/Python3BaseVisitor.cpp
  ./languages/py3/generated/Python3Lexer.cpp
  ./languages/py3/generated/Python3Listener.cpp
  ./languages/py3/generated/Python3Parser.cpp
  ./languages/py3/generated/Python3Visitor.cpp
  ${PARSER_HEADER_LIST}
  ${LOGURU_FILES}
)

if(WIN32)
  find_library(antlr REQUIRED NAMES antlr4-runtime PATHS ../lib/release)
  target_link_libraries(parser PUBLIC ${antlr})
  target_include_directories(parser PUBLIC ../src)
else()
  find_library(antlr REQUIRED NAMES antlr antlr4 antlr4-runtime)
  #add_dependencies(parser ${antlr})
  target_link_libraries(parser PRIVATE ${antlr} stdc++fs)
  include_directories(/usr/include/antlr4-runtime)
endif()
