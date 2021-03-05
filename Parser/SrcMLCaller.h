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
	/// Start srcMl op een gegeven path
	/// </summary>
	/// <param name="cmd">Path waarvanuit srcML moet werken</param>
	/// <returns>Stringstream met de output van srcML</returns>
	static StringStream* StartSrcML(std::string cmd);
private:
	static void exec(std::string cmd, StringStream* stream);
};