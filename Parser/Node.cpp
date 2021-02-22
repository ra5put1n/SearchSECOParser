#include "Node.h"

Node::Node(std::string tag, Node* previous)
{
	this->tag = tag;
	this->previous = previous;
}

Node::Node(std::string text)
{
	this->contents = contents;
}

std::string Node::GetContents()
{
	return contents;
}

void Node::AddNode(Node* node)
{
	
}

void Node::SetContents(std::string contents)
{
	this->contents = contents;
}

Node* Node::GetPrevious()
{
	return previous;
}
