/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once

#include "StringStream.h"
#include "Node.h"

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

struct TagData
{

public:
	/// <summary>
	/// Information concerning a Tag
	/// </summary>
	/// <param name="tag">Tag</param>
	/// <param name="textInTag">Text found between opening and closing tag</param>
	/// <param name="textBefore">Text found before the opening tag</param>
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
	/// Constructor
	/// </summary>
	/// <param name="pathPrefixLength">length of the path used</param>
	XmlParser(int pathPrefixLength);

	/// <summary>
	/// Find methods in XML, abstract, and hash them
	/// </summary>
	/// <param name="stringStream">Stream containing the XML</param>
	/// <param name="ParseFurther">For testing purposes, default true</param>
	/// <returns>Vector containing the hashes from found methods</returns>
	std::vector<HashData> parseXML(StringStream* stringStream, bool parseFurther = true);
	
	/// <summary>
	/// Find next tag, including contents and anything before it
	/// </summary>
	/// <param name="stringStream">Stream to search for next tag</param>
	/// <returns>TagData concerning the found tag</returns>
	TagData getNextTag(StringStream* stringStream);

	/// <summary>
	/// Returns the current tree, for testing only
	/// </summary>
	/// <returns>The top node of the current Tree</returns>
	Node* getTree() { return tree; };
private:
	Node* tree;
	int pathPrefixLength, lineNumber = 0;

};
