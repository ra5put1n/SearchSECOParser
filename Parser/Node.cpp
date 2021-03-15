/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "Node.h"

Node::Node(Tag tag, Node* previous)
{
	this->tag = tag;
	this->previous = previous;
	childNodes = std::vector<Node*>();
}

Node::Node(std::string text, Tag tag, Node* previous)
{
	this->tag = tag;
	this->contents = text;
	this->previous = previous;
}

Node::~Node()
{
	// Destroy children when node is deleted
	for (int i = 0; i < childNodes.size(); i++)
	{
		delete childNodes[i];
	}
}

std::vector<Node*> Node::GetBranches()
{
	return childNodes;
}

std::string Node::GetContents()
{
	return contents;
}

Tag Node::GetTag()
{
	return tag;
}

void Node::AddNode(Node* node)
{
	childNodes.push_back(node);
}

void Node::RemoveNode(Node* node)
{
	// Search for Node in children
	for (int i = 0; i < childNodes.size(); i++)
	{
		if (childNodes[i] == node)
		{
			childNodes.erase(childNodes.begin() + i, childNodes.begin() + i + 1);
			return;
		}
	}
}

void Node::SetContents(std::string contents)
{
	this->contents = contents;
}

Node* Node::GetPrevious()
{
	return previous;
}

bool Node::equal(Node* n)
{
	// For equality children need to be equal
	if (n->childNodes.size() != childNodes.size())
	{
		return false;
	}
	for (int i = 0; i < childNodes.size(); i++)
	{
		if (!childNodes[i]->equal(n->childNodes[i]))
		{
			return false;
		}
	}
	// For equality content (tag, content) needs to be equal
	return tag == n->tag && contents == n->contents;
}
