#include "XmlParser.h"
#include "AbstractSyntaxToHashable.h"
#include "Tag.h"
#include <iostream>

XmlParser::XmlParser(StringStream* stringStream)
{
	ParseXML(stringStream, true);
}

void XmlParser::ParseXML(StringStream* stringStream, bool ParseFurther)
{
	tree = new Node(unknown_tag, nullptr);
	// The first tag should always be the <?xml> tag, which we want to ignore
	if (!GetNextTag(stringStream).tag._Equal("?xml"))
	{
		tree = nullptr;
		return;
	}


	Node* current = tree;
	while (!stringStream->Stop())
	{
		TagData tagData = GetNextTag(stringStream);
		if (!tagData.textBefore._Equal(""))
		{
			current->AddNode(new Node(tagData.textBefore, current->GetTag(), current));
		}

		if (tagData.tag[0] == '/')
		{
			if (TagMap::getTag(tagData.tag.substr(1)) != current->GetTag())
			{
				std::cout << "Closing tags don't line up";
				tree = nullptr;
				return;
			}
			// Closing tag, so we go a tag back in our tree
			if (current->GetTag() == function_tag)
			{
				// TODO: call the we abstraction + hash function.
				std::string s = AbstractSyntaxToHashable::getHashable(*current);
				std::cout << s << std::endl;
				system("pause");
			}
			current = current->GetPrevious();
		}
		else if (tagData.tag.substr(0, 7)._Equal("comment"))
		{
			// If we see a comment, we want to skip everything in it
			GetNextTag(stringStream);
		}
		else
		{
			// New tag, so we add it and set it as our new current tag
			Node* n = new Node( TagMap::getTag(tagData.tag), current);
			current->AddNode(n);
			n->SetContents(tagData.textInTag);
			current = n;
		}
	}
}

TagData XmlParser::GetNextTag(StringStream* stringStream)
{
	// Getting the text before the next tag
	std::string textBefore;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '<')
		{
			break;
		}
		if (next == ' ' || next == '\n' || next == '\r' || next == (char)9)
		{
			continue;
		}
		textBefore += next;
	}
	// Getting the actual tag, but without all the stuff behind it
	std::string tag;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		//if (tag.length() == 0 && next == ' ') { continue; }
		if (next == ' ')
		{
			break;
		}
		if (next == '>')
		{
			return TagData(tag, "", textBefore);
		}
		tag += next;
	}
	// Getting the stuff behind the tag thats still in the <>
	std::string textInTag;
	while (!stringStream->Stop())
	{
		char next = stringStream->NextChar();
		if (next == '>')
		{
			break;
		}
		textInTag += next;
	}
	return TagData(tag, textInTag, textBefore);
}
