/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "SrcMLCaller.h"
#include <thread>

#define bufferSize 1024


StringStream* SrcMLCaller::startSrcML(std::string cmd, int numberThreads)
{
    StringStream *stream = new StringStream(bufferSize);

    std::string threads = "";
    if (numberThreads != -1)
    {
        threads = "-j " + std::to_string(numberThreads) + " ";
    }

    // Start srcML in new thread so the output can be read while it is being made
    new std::thread(exec, "srcml " + threads + cmd, stream);

    return stream;
}

/*
* Partially copied and edited from:
* https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po
*/
void SrcMLCaller::exec(std::string cmd, StringStream* stream)
{
    // Buffer to read into and then put into stream
    std::array<char, bufferSize>* buffer = new std::array<char, bufferSize>();

    // Open console to interact with srcML, use proper open function depending on operating system
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd.c_str(), "r"), _pclose);
#else
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);
#endif

    if (!pipe)
    {
        throw std::runtime_error("popen() failed!");
    }

    // Amount of data read, is less then bufferSize if output ends
    size_t bytesRead;

    // Read until there is nothing more to read, insert chunks into stream

    while ((bytesRead = fread(buffer->data(), 1, bufferSize, pipe.get())) > 0)
    {
        stream->addBuffer(buffer->data(), bytesRead);
        buffer = new std::array<char, bufferSize>();
    }

    // Let stream know there won't be more data
    stream->setInputEnded(true);
}

