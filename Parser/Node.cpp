#include "Node.h"

Node::Node(std::string tag, Node* previous)
{
	this->tag = tag;
	this->previous = previous;
	childNodes = std::vector<Node*>();
}

Node::Node(std::string text)
{
	this->contents = text;
}

std::vector<Node*> Node::GetBranches()
{
	return childNodes;
}

std::string Node::GetContents()
{
	return contents;
}

std::string Node::GetTag()
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
