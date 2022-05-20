/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/
#pragma once

#include <string>

#include "StringStream.h"
#include "Node.h"
#include "HashData.h"

#define SEARCHSECOPARSER_MIN_FUNCTION_CHARACTERS 50
#define SEARCHSECOPARSER_MIN_FUNCTION_LINES 6
#define SEARCHSECOPARSER_SRCML_FILENAME_OFFSET 10

struct TagData
{
public:
	/// <summary>
	/// Information concerning a Tag.
	/// </summary>
	/// <param name="tag">Tag.</param>
	/// <param name="textInTag">Text found between opening and closing tag.</param>
	/// <param name="textBefore">Text found before the opening tag.</param>
	TagData(std::string tag, std::string textInTag, std::string textBefore)
	{
		this->tag = tag;
		this->textBefore = textBefore;
		this->textInTag = textInTag;
	};
	std::string tag, textBefore, textInTag;
};

class XmlParser
{
public:
	/// <summary>
	/// Constructor.
	/// </summary>
	/// <param name="pathPrefixLength">Path to parse.</param>
	XmlParser(std::string pathPrefixLength, int filesCount);

	/// <summary>
	/// Find methods in XML, abstract, and hash them.
	/// </summary>
	/// <param name="stringStream">Stream containing the XML.</param>
	/// <param name="parseFurther">For testing purposes, default true.</param>
	/// <returns>Vector containing the hashes from found methods.</returns>
	std::vector<HashData> parseXML(StringStream* stringStream, bool parseFurther = true);
	
	/// <summary>
	/// Find next tag, including contents and anything before it.
	/// </summary>
	/// <param name="stringStream">Stream to search for next tag.</param>
	/// <returns>TagData concerning the found tag.</returns>
	TagData getNextTag(StringStream* stringStream);


	/// <summary>
	/// Returns the current tree, for testing only.
	/// </summary>
	/// <returns>The top node of the current Tree.</returns>
	Node* getTree() { return tree; };

private:
	/// <summary>
	/// Will handle closing tags. 
	/// Will also hash the function if the function tag gets closed.
	/// </summary>
	/// <param name="tagData">The closing tag.</param>
	/// <param name="ParseFurther">For testing purposes, can otherwise be ignored.</param>
	void handleClosingTag(TagData tagData, bool parseFurther);

	/// <summary>
	/// Will handle opening tags.
	/// This function will also check if the tag is self closing.
	/// </summary>
	/// <param name="tagData">The opening tag.</param>
	void handleOpeningTag(TagData tagData);

	/// <summary>
	/// Handles the unit tag.
	/// </summary>
	/// <param name="tagData">The unit tag containing info.</param>
	void handleUnitTag(TagData tagData);

	/// <summary>
	/// Gets the data from the string stream until it finds one of the break values.
	/// It will also stop if the stream runs out of data.
	/// </summary>
	/// <param name="stringStream">The source to read from.</param>
	/// <param name="breakOn">The characters on which it stops.</param>
	/// <param name="removeWhiteSpace">Remove white space yes or no.</param>
	/// <param name="brokeOn">A second return. Will give on what character it broke.</param>
	/// <returns>The text found before the break value.</returns>
	std::string getDataUntil(StringStream *stringStream, std::vector<char> breakOn, bool removeWhiteSpace, char &brokeOn);
	
	/// <summary>
	/// Gets the data from the string stream until it finds the break value.
	/// It will also stop if the stream runs out of data.
	/// </summary>
	/// <param name="stringStream">The source to read from.</param>
	/// <param name="breakOn">The character on which it stops.</param>
	/// <param name="removeWhiteSpace">Remove white space yes or no.</param>
	/// <returns>The text found before the break value.</returns>
	std::string getDataUntil(StringStream *stringStream, char breakOn, bool removeWhiteSpace);

	// Complete tree of input.
	Node* tree;

	// Tree for method currently being parsed.
	Node* current;

	// Some vars for keeping track of current status in file.
	int lineNumber = 0;
	int startLastFunction = 0;
	bool inFunction = false;
	std::string currentFileName = "";

	// File path currently operating in, for giving relative paths for files.
	std::string path;

	// Some vars for keeping track of found hashes/number of methods.
	std::vector<HashData> hashes;
	int functionCount = 0;
	int filesCount;
	int currentFile = 0;
};
