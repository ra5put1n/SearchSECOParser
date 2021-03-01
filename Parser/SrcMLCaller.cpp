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


StringStream* SrcMLCaller::StartSrcML(const char* cmd)
{
    StringStream* stream = new StringStream();
    new std::thread(exec, cmd, stream);
    return stream;
}
/*
* Partially copied and edited from:
* https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po
*/
void SrcMLCaller::exec(const char* cmd, StringStream* stream)
{
    std::array<char, bufferSize> buffer;
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
    if (!pipe)
    {
        throw std::runtime_error("popen() failed!");
    }
    size_t bytesRead;
    while ((bytesRead = fread(buffer.data(), 1, bufferSize, pipe.get())) > 0)
    {
        stream->AddBuffer(buffer.data(), bytesRead);
    }

    stream->SetInputEnded(true);
}

