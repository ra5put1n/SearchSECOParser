/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/

#include "Python3ParserListenerCustom.h"
#include "../../md5/md5.h"

CustomPython3Listener::CustomPython3Listener(Python3Parser *parser, antlr4::TokenStreamRewriter *tsr,
                                             std::string fileName)
{
    this->parser = parser;
    this->tsr = tsr;
    this->fileName = fileName;
    start = 0;
    stop = 0;
}
