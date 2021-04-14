/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once

#include "StringStream.h"
#include "Node.h"
#include "HashData.h"


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
	XmlParser(std::string pathPrefixLength);

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
	int lineNumber = 0;
    std::string path;

};
