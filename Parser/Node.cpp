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

void Node::SetContents(std::string contents)
{
	this->contents = contents;
}

Node* Node::GetPrevious()
{
	return previous;
}
