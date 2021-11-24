/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/

#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <array>
#include <thread>
#include <stdio.h>
#if !defined(WIN32) && !defined(_WIN32) && !defined(__WIN32) || defined(__CYGWIN__)
#include <sys/select.h>
#endif


#include "Logger.h"
#include "SrcMLCaller.h"
#include <future>

extern std::atomic<bool> stopped;

StringStream *SrcMLCaller::startSrcML(std::string cmd, std::thread *srcmlThread, int numberThreads)
{
	StringStream *stream = new StringStream(SEARCHSECOPARSER_SRCML_BUFFER_SIZE);

	std::string threads = "";
	if (numberThreads != -1)
	{
		threads = "-j " + std::to_string(numberThreads) + " ";
	}

	// Start srcML in new thread so the output can be read while it is being made.
	srcmlThread = new std::thread(exec, "srcml " + threads + cmd, stream);

	return stream;
}

/*
* Partially copied and edited from:
* https://stackoverflow.com/questions/478898/how-do-i-execute-a-command-and-get-the-output-of-the-command-within-c-using-po.
*/
void SrcMLCaller::exec(std::string cmd, StringStream *stream)
{
	// Open console to interact with srcML, use proper open function depending on operating system.
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	FILE *s = _popen(cmd.c_str(), "r");
	int fd = _fileno(s);
	std::unique_ptr<FILE, decltype(&_pclose)> pipe(s, _pclose);
#else
	FILE *s = popen(cmd.c_str(), "r");
	int fd = fileno(s);
	std::unique_ptr<FILE, decltype(&pclose)> pipe(s, pclose);
#endif

	if (!pipe)
	{
		Logger::logWarn("Popen() failed, can't call SrcML, returning", __FILE__, __LINE__);
		stream->setInputEnded(true);
		return;
	}

	auto pipeGet = pipe.get();

	// Buffer to read into and then put into stream.
	std::array<char, SEARCHSECOPARSER_SRCML_BUFFER_SIZE> *buffer =
		new std::array<char, SEARCHSECOPARSER_SRCML_BUFFER_SIZE>();

	// Amount of data read, is less then bufferSize if output ends.
	size_t bytesRead;

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
	// Read until there is nothing more to read, insert chunks into stream.
	while (!stopped && (bytesRead = fread(buffer->data(), 1, SEARCHSECOPARSER_SRCML_BUFFER_SIZE, pipeGet)) > 0 &&
		   !stopped)
	{
		stream->addBuffer(buffer->data(), bytesRead);
		buffer = new std::array<char, SEARCHSECOPARSER_SRCML_BUFFER_SIZE>();
	}
#else
	fd_set set;
	struct timeval selectTimeout;

	FD_ZERO(&set);
	FD_SET(fd, &set);

	selectTimeout.tv_sec = 5;
	selectTimeout.tv_usec = 0;

	while (!stopped && feof(pipeGet) == 0)
	{
		int ret = select(fd + 1, &set, NULL, NULL, &selectTimeout);

		selectTimeout.tv_sec = 5;

		// If the select operation timed out,
		if (ret == 0)
		{
			// simply continue to re-check if the operation was externally stopped.
			continue;
		}
		// If ret < 0, an error occured in the select call.
		else if (ret < 0)
		{
			// Stop listening for additional data.
			break;
		}
		// Else, there was activity on the fd.
		else
		{
			bytesRead = fread(buffer->data(), 1, SEARCHSECOPARSER_SRCML_BUFFER_SIZE, pipeGet);
			stream->addBuffer(buffer->data(), bytesRead);
			buffer = new std::array<char, SEARCHSECOPARSER_SRCML_BUFFER_SIZE>();
		}
	}
#endif

	if (stopped)
	{
		errno = EDOM;
		stream->setFailed();
		if (pipe.get() != NULL)
		{
			std::fclose(pipe.get());
		}
	}

	// Let stream know there won't be more data.
	stream->setInputEnded(true);
}

