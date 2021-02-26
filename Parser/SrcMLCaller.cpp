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
    std::array<char, 1024> buffer;
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
    if (!pipe)
    {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr)
    {
        stream->AddBuffer(buffer.data(), buffer.size());
    }
    stream->SetInputEnded(true);
}

