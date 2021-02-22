#pragma once
#include <string>
#include <vector>

class Node
{
public:
	// For a node with a tag
	Node(std::string tag, Node* previous);
	// For a only text node
	Node(std::string text);
	std::vector<Node*> GetBranches();
	std::string GetContents();
	std::string GetTag();
	void AddNode(Node* node);
	void SetContents(std::string contents);
	Node* GetPrevious();
private:
	std::string tag, contents;
	std::vector<Node*> childNodes;
	Node* previous;
};
