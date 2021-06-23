/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/
#pragma once

#include "StringStream.h"
#include "Node.h"
#include "HashData.h"


struct TagData
{

public:
	/// <summary>
	/// Information concerning a Tag.
	/// </summary>
	/// <param name="tag">Tag.</param>
	/// <param name="textInTag">Text found between opening and closing tag<./param>
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
	XmlParser(std::string pathPrefixLength);

	/// <summary>
	/// Find methods in XML, abstract, and hash them.
	/// </summary>
	/// <param name="stringStream">Stream containing the XML.</param>
	/// <param name="ParseFurther">For testing purposes, default true.</param>
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
	void handleClosingTag(TagData tagData, bool parseFurther);

	/// <summary>
	/// Will handle opening tags.
	/// This function will also check if the tag is self closing.
	/// </summary>
	void handleOpeningTag(TagData tagData);

	/// <summary>
	/// Handles the unit tag.
	/// </summary>
	void handleUnitTag(TagData tagData);

	/// <summary>
	/// Gets the data from the string stream until it finds one of the break values.
	/// It will also stop if the stream runs out of data.
	/// </summary>
	/// <param name="stringStream">The source to read from.</param>
	/// <param name="breakOn">The characters on which it stops.</param>
	/// <param name="removeWhiteSpace">Remove white space yes or no.</param>
	/// <param name="brokeOn">A second return. Will give on what character it broke.</param>
	std::string getDataUntil(StringStream *stringStream, std::vector<char> breakOn, bool removeWhiteSpace, char &brokeOn);
	
	/// <summary>
	/// Gets the data from the string stream until it finds the break value.
	/// It will also stop if the stream runs out of data.
	/// </summary>
	/// <param name="stringStream">The source to read from.</param>
	/// <param name="breakOn">The character on which it stops.</param>
	/// <param name="removeWhiteSpace">Remove white space yes or no.</param>
	std::string getDataUntil(StringStream *stringStream, char breakOn, bool removeWhiteSpace);
	Node* tree;
	std::string path;
	int lineNumber = 0;
	bool inFunction = false;
	std::string currentFileName = "";
	int startLastFunction = 0;
	int functionCount = 0;
	Node *current;
	std::vector<HashData> hashes;
};
