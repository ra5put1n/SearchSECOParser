#pragma once
#include "StringStream.h"
#include "Node.h"

struct TagData
{

	TagData(std::string tag, std::string textBefore)
	{
		this->tag = tag;
		this->textBefore = textBefore;
	};

	std::string tag, textBefore;
};

class XmlParser
{
public:
	XmlParser(StringStream stringStream);
private:
	void ParseXML(StringStream stringStream);
	TagData GetNextTag(StringStream stringStream);
	Node* tree;

};
