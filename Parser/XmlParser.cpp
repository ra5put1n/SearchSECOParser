/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/

#include <iostream>

#include "AbstractSyntaxToHashable.h"
#include "Tag.h"
#include "XmlParser.h"
#include "md5/md5.h"

XmlParser::XmlParser(std::string path)
{
	this->path = path;
}

std::vector<HashData> XmlParser::parseXML(StringStream *stringStream, bool parseFurther)
{
    // The base node of the tree.
    tree = new Node(unknown_tag, nullptr);

    // The first tag should always be the <?xml> tag, which we want to ignore.
    TagData td = getNextTag(stringStream);
    if (!(td.tag == "?xml"))
    {
        // Received invalid input.
        tree = nullptr;
        std::cout << "wrong first tag, tag in doc was: " << td.tag << std::endl;
        return hashes;
    }

    // Setting the current node
    current = tree;

    // Keep looping for as long as the input has not yet ended.
    while (!stringStream->stop())
    {
        TagData tagData = getNextTag(stringStream);

        // Adding the text the getNextTag function found, assuming it is not empty and we are actually in a function.
        if (!(tagData.textBefore == "") && inFunction)
        {
            current->addNode(new Node(tagData.textBefore, current->getTag(), current));
        }

        // Check if we find a closing tag. Only relevant if we are in a function.
        if (tagData.tag[0] == '/' && inFunction)
        {
            handleClosingTag(tagData, parseFurther);
        }
        else if (tagData.tag.substr(0, 7) == "comment")
        {
            // If we see a comment, we want to skip everything in it.
            while (!(getNextTag(stringStream).tag == "/comment"))
            {
            };
        }
        else
        {
            handleOpeningTag(tagData);
        }
    }

    return hashes;
}

void XmlParser::handleClosingTag(TagData tagData, bool parseFurther)
{
    // Checking if the node we close actually has the same tag as the closing tag we just found.
    if (TagMap::getTag(tagData.tag.substr(1)) != current->getTag())
    {
        std::cout << "Closing tags don't line up in " << currentFileName;
        // In case the closing tags don't line up, we will just give up on this function.
        // and continue to the next function.
        delete tree;
        tree = new Node(unknown_tag, nullptr);
        current = tree;
        inFunction = false;
        return;
    }

    // Going back one node in our tree.
    Node *prev = current->getPrevious();
    if (current->getTag() == function_tag && parseFurther)
    {
        // If we close a function tag, then we know that function is parsed fully,
        // meaning we can go ahead and hash it.
        AbstractionData *s = AbstractSyntaxToHashable::getHashable(current);
        std::string mdHash = md5(s->string);
        hashes.push_back(HashData(mdHash, s->funcName, currentFileName, startLastFunction, lineNumber));
        // Removing the tree after we've hashed it to free up memory.
        prev->removeNode(current);
        inFunction = false;
        delete current;
    }
    current = prev;
}

void XmlParser::handleOpeningTag(TagData tagData)
{
    // if we are not in a function and the current tag we found is not a function tag,
    // then it is not important for us to remember it seing as we only care about
    // hashing functions. Only exception is a unit tag because we do need to know
    // in which file the functions are that we find, and the unit contains that info.
    if (TagMap::getTag(tagData.tag) != function_tag && !inFunction)
    {
        if (tagData.tag == "unit")
        {
            handleUnitTag(tagData);
        }
        return;
    }
    else if (TagMap::getTag(tagData.tag) == function_tag)
    {
        // Starting a new function.
        inFunction = true;
        startLastFunction = lineNumber;
    }

    // If the tag is a closing tag without space, move the closing tag inside.
    if (tagData.tag[tagData.tag.size() - 1] == '/')
    {
        tagData.tag.pop_back();
        tagData.textInTag.append(" /");
    }

    // New tag, so we add it and set it as our new current tag.
    Node *n = new Node(TagMap::getTag(tagData.tag), current);

    current->addNode(n);
    n->setContents(tagData.textInTag);

    // Checking if the tag was a self closing tag.
    if (!(tagData.textInTag.size() > 0 && tagData.textInTag[tagData.textInTag.size() - 1] == '/'))
    {
        current = n;
    }
}

void XmlParser::handleUnitTag(TagData tagData)
{
    size_t filenamePosition = tagData.textInTag.find("filename=") + 10;
    if (filenamePosition >= 10)
    {
        int filenameBuffer = 0;
        // If the filename is a full path, remove the path prefix
        if (tagData.textInTag.find(path) != std::string::npos)
        {
            filenameBuffer = path.length() + 1;
        }

        size_t filenameEnd = tagData.textInTag.find('"', filenamePosition);
        currentFileName = tagData.textInTag.substr(filenamePosition + filenameBuffer, filenameEnd - filenamePosition - filenameBuffer);
        lineNumber = 1;    
    }
}

TagData XmlParser::getNextTag(StringStream *stringStream)
{
    // Getting the text before the next tag.
    std::string textBefore, tag, textInTag;
    textBefore = getDataUntil(stringStream, '<', true);

    // Getting the actual tag, but without all the stuff behind it.
    char brokeOn = '>';
    tag = getDataUntil(stringStream, {' ', '>'}, false, brokeOn);
    if (brokeOn == ' ')
    {
        // Getting the stuff in the tag that is not the tag itself.
        textInTag = getDataUntil(stringStream, '>', false);
    }
    return TagData(tag, textInTag, textBefore);
}

std::string XmlParser::getDataUntil(StringStream *stringStream, char breakOn, bool removeWhiteSpace)
{
    std::string ret = "";
    while (!stringStream->stop())
    {
        char next = stringStream->nextChar();
        if (breakOn == next)
        {
            break;
        }
        // Keeping track of how many line breaks we come across, so that we can output the linenumbers.
        if (next == '\n')
        {
            lineNumber++;
            continue;
        }
        // Removing whiteSpace.
        if (removeWhiteSpace && (next == ' ' || next == '\r' || next == '\t'))
        {
            continue;
        }
        ret += next;
    }
    return ret;
}

std::string XmlParser::getDataUntil(StringStream *stringStream, std::vector<char> breakOn, bool removeWhiteSpace,
                                    char &brokeOn)
{
    std::string ret = "";
    while (!stringStream->stop())
    {
        char next = stringStream->nextChar();
        for (char c : breakOn)
        {
            if (c == next)
            {
                brokeOn = c;
                return ret;
            }
        }
        // Keeping track of how many line breaks we come across, so that we can output the linenumbers.
        if (next == '\n')
        {
            lineNumber++;
            continue;
        }
        // Removing whiteSpace.
        if (removeWhiteSpace && (next == ' ' || next == '\r' || next == '\t'))
        {
            continue;
        }
        ret += next;
    }
    return ret;
}
