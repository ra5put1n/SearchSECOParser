#include "XmlParser.h"

XmlParser::XmlParser(StringStream* stringStream)
{
	ParseXML(stringStream);
}

void XmlParser::ParseXML(StringStream* stringStream)
{
	tree = new Node("xml", nullptr);
	// The first tag will always be the <?xml> tag, which we want to ignore
	GetNextTag(stringStream);


	Node* current = tree;
	while (!stringStream->Stop())
	{
		TagData tagData = GetNextTag(stringStream);
		current->AddNode(new Node(tagData.textBefore));

		if (tagData.tag[0] == '\\')
		{
			current = current->GetPrevious();
		}
		else if (tagData.tag._Equal("comment"))
		{
			// If we see a comment, we want to skip everything in it
			GetNextTag(stringStream);
		}
	}
}

TagData XmlParser::GetNextTag(StringStream* stringStream)
{
	std::string textBefore;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '<')
		{
			break;
		}
		textBefore += next;
	}
	std::string tag;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '>')
		{
			break;
		}
		tag += next;
	}
	return TagData(tag, textBefore);
}
