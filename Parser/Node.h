#pragma once
#include <string>
#include <vector>
#include "Tag.h"

class Node
{
public:
	// For a node with a tag
	Node(Tag tag, Node* previous);
	// For a only text node
	Node(std::string text, Tag tag, Node* previous);
	std::vector<Node*> GetBranches();
	std::string GetContents();
	Tag GetTag();
	void AddNode(Node* node);
	void SetContents(std::string contents);
	Node* GetPrevious();
private:
	std::string contents;
	Tag tag;
	std::vector<Node*> childNodes;
	Node* previous;
};
