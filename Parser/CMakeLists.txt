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
   HashData.h
   Node.h
   Parser.h
   SrcMLCaller.h
   StringStream.h
   Tag.h
   XmlParser.h
   ./md5/md5.h
)


add_library(parser
  AbstractSyntaxToHashable.cpp
  Node.cpp
  Parser.cpp
  SrcMLCaller.cpp
  StringStream.cpp
  Tag.cpp
  XmlParser.cpp
  ./md5/md5.cpp
  ${PARSER_HEADER_LIST}
  ${LOGURU_FILES}
)
