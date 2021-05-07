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
   ./loguru/loguru.hpp
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
  ./loguru/loguru.cpp
  ${PARSER_HEADER_LIST}
)

