/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "XmlParser.h"
#include "AbstractSyntaxToHashable.h"
#include "Tag.h"
#include <iostream>
#include "md5.h"

XmlParser::XmlParser()
{
	
}

std::vector<std::string> XmlParser::ParseXML(StringStream* stringStream, bool ParseFurther)
{
	std::vector<std::string> hashes;
	tree = new Node(unknown_tag, nullptr);
	// The first tag should always be the <?xml> tag, which we want to ignore
	if (!GetNextTag(stringStream).tag._Equal("?xml"))
	{
		tree = nullptr;
		return hashes;
	}
	bool inFunction = false;

	Node* current = tree;
	while (!stringStream->Stop())
	{
		TagData tagData = GetNextTag(stringStream);
		if (!tagData.textBefore._Equal("") && inFunction)
		{
			current->AddNode(new Node(tagData.textBefore, current->GetTag(), current));
		}

		if (tagData.tag[0] == '/' && inFunction)
		{
			if (TagMap::getTag(tagData.tag.substr(1)) != current->GetTag())
			{
				std::cout << "Closing tags don't line up";
				tree = nullptr;
				return hashes;
			}
			// Closing tag, so we go a tag back in our tree
			Node* prev = current->GetPrevious();
			if (current->GetTag() == function_tag && ParseFurther)
			{
				// TODO: call the we abstraction + hash function.
				std::string s = AbstractSyntaxToHashable::getHashable(current);
				hashes.push_back(md5(s));
				prev->RemoveNode(current);
				inFunction = false;
				delete current;
			}
			current = prev;
		}
		else if (tagData.tag.substr(0, 7)._Equal("comment"))
		{
			// If we see a comment, we want to skip everything in it
			GetNextTag(stringStream);
		}
		else
		{
			if (TagMap::getTag(tagData.tag) != function_tag && !inFunction)
			{
				continue;
			}
			else if (TagMap::getTag(tagData.tag) == function_tag)
			{
				inFunction = true;
			}
			// New tag, so we add it and set it as our new current tag
			Node* n = new Node( TagMap::getTag(tagData.tag), current);
			current->AddNode(n);
			n->SetContents(tagData.textInTag);
			if (!((tagData.textInTag.size() > 0 && tagData.textInTag[tagData.textInTag.size() - 1] == '/') || tagData.tag[tagData.tag.size() - 1] == '/'))
			{
				current = n;
			}
		}
	}
	return hashes;
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
