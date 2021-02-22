#pragma once
#include "StringStream.h"
#include "Node.h"

struct TagData
{

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
private:
	void ParseXML(StringStream* stringStream);
	TagData GetNextTag(StringStream* stringStream);
	Node* tree;

};
