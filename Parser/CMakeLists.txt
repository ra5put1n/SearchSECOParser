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

if (UNIX)
  list(APPEND CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")
endif(UNIX)

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
)

