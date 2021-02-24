#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include "SrcMLCaller.h"

/*
* https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po
*/
StringStream* SrcMLCaller::StartSrcML(const char* cmd)
{
    std::array<char, 128> buffer;
    StringStream* stream = new StringStream();
    std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        //result += buffer.data();
        stream->AddBuffer(buffer.data(), buffer.size());
    }
    stream->SetInputEnded(true);
    return stream;
}

