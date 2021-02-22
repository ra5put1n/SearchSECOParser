#pragma once
#include <string>

class Node
{
public:
	Node();
	Node* GetBranches();
	std::string GetContents();
	void AddNode(Node* node);
	void SetConstents(std::string contents);
};
