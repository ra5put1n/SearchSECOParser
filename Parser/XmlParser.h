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
	XmlParser(StringStream* stringStream);
	void ParseXML(StringStream* stringStream, bool ParseFurther);
	TagData GetNextTag(StringStream* stringStream);
	Node* GetTree() { return tree; };
private:
	Node* tree;

};
