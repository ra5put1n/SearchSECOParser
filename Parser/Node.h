/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University (Department of Information and Computing Sciences)
*/
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
