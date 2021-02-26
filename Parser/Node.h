/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
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
	~Node();
	std::vector<Node*> GetBranches();
	std::string GetContents();
	Tag GetTag();
	void AddNode(Node* node);
	void SetContents(std::string contents);
	Node* GetPrevious();
	bool equal(Node* n);
	void RemoveNode(Node* node);
private:
	std::string contents;
	Tag tag;
	std::vector<Node*> childNodes;
	Node* previous;
};
