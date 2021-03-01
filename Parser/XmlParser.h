/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once
#include "StringStream.h"
#include "Node.h"


struct TagData
{

public:
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
	XmlParser(int pathPrefixLength);
	std::vector<std::string> ParseXML(StringStream* stringStream, bool ParseFurther);
	TagData GetNextTag(StringStream* stringStream);
	Node* GetTree() { return tree; };
private:
	Node* tree;
	int pathPrefixLength;

};
