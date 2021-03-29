/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once

#include <string>

struct HashData
{
  public:
    /// <summary>
    /// Hash(es) of function with metadata
    /// </summary>s
    /// <param name="hash">Hash of abstracted function</param>
    /// <param name="functionName">Name of function</param>
    /// <param name="fileName">File where function can be found</param>
    /// <param name="lineNumber">Line number on which function starts</param>
    /// <param name="lineNumberEnd">Line number on which function ends</param>
    HashData(std::string hash, std::string functionName, std::string fileName, int lineNumber, int lineNumberEnd)
    {
        this->hash = hash;
        this->fileName = fileName;
        this->functionName = functionName;
        this->lineNumber = lineNumber;
        this->lineNumberEnd = lineNumberEnd;
    };
    std::string hash, fileName, functionName;
    int lineNumber, lineNumberEnd;
};