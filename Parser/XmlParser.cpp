/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "XmlParser.h"
#include "AbstractSyntaxToHashable.h"
#include "Tag.h"
#include <iostream>
#include "md5.h"

XmlParser::XmlParser(int pathPrefixLength)
{
	this->pathPrefixLength = pathPrefixLength;
}

std::vector<std::string> XmlParser::ParseXML(StringStream* stringStream, bool ParseFurther)
{
	std::vector<std::string> hashes;
	tree = new Node(unknown_tag, nullptr);
	// The first tag should always be the <?xml> tag, which we want to ignore
	TagData td = GetNextTag(stringStream);
	if (!td.tag._Equal("?xml"))
	{
		tree = nullptr;
		std::cout << "wrong first tag, tag in doc was: " << td.tag << std::endl;
		return hashes;
	}
	bool inFunction = false;
	std::string currentFileName = "";
	int startLastFunction = 0;

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
				std::cout << "Closing tags don't line up in " << currentFileName;
				//tree = nullptr;
				//return hashes;
				delete tree;
				tree = new Node(unknown_tag, nullptr);
				current = tree;
				inFunction = false;
				continue;
			}
			// Closing tag, so we go a tag back in our tree
			Node* prev = current->GetPrevious();
			if (current->GetTag() == function_tag && ParseFurther)
			{
				// TODO: call the we abstraction + hash function.
				std::string s = AbstractSyntaxToHashable::getHashable(current);
				std::string mdHash = md5(s);
				hashes.push_back(mdHash + " " + currentFileName + " " + std::to_string(startLastFunction));
				prev->RemoveNode(current);
				inFunction = false;
				delete current;
			}
			current = prev;
		}
		else if (tagData.tag.substr(0, 7)._Equal("comment"))
		{
			// If we see a comment, we want to skip everything in it
			while(!GetNextTag(stringStream).tag._Equal("/comment"));
		}
		else
		{
			if (TagMap::getTag(tagData.tag) != function_tag && !inFunction)
			{
				if (tagData.tag._Equal("unit"))
				{
					size_t filenamePosition = tagData.textInTag.find("filename=") + 10;
					if (filenamePosition != std::string::npos)
					{
						size_t filenameEnd = tagData.textInTag.find('/"', filenamePosition);
						currentFileName = tagData.textInTag.substr(filenamePosition + pathPrefixLength, filenameEnd - filenamePosition - pathPrefixLength);
						lineNumber = 1;
					}
				}
				continue;
			}
			else if (TagMap::getTag(tagData.tag) == function_tag)
			{
				inFunction = true;
				startLastFunction = lineNumber;
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
		if (next == '\n')
		{
			lineNumber++;
			continue;
		}
		if (next == ' ' || next == '\r' || next == (char)9)
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
