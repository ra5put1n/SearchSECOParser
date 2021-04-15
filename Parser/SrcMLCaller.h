/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once

#include <string>
 
#include "StringStream.h"

class SrcMLCaller
{
public:
	/// <summary>
	/// Starts srcMl for a given path.
	/// </summary>
	static StringStream* startSrcML(std::string cmd, int numberThreads = -1);
private:
	/// <summary>
	/// Executes the given command and puts the output in the given string stream.
	/// </summary>
	static void exec(std::string cmd, StringStream* stream);
};