/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
#pragma once

#include <string>
 
#include "StringStream.h"

#define SEARCHSECOPARSER_SRCML_BUFFER_SIZE 1024

class SrcMLCaller
{
public:
	/// <summary>
	/// Starts srcMl for a given path.
	/// </summary>
	/// <param name="path">Path to send to srcML.</param>
	/// <param name="numberThreads">Maximum number of threads the parser may use.</param>
	/// <returns>StringStream object to which the output of srcML is written.</returns>
  static std::thread *startSrcML(std::string path, StringStream *stream, int numberThreads = -1);

private:
	/// <summary>
	/// Executes the given command and puts the output in the given string stream.
	/// </summary>
	/// <param name="cmd">Command to execute.</param>
	/// <param name="stream">StringStream which the output will be written to.</param>
	static void exec(std::string cmd, StringStream* stream);
};