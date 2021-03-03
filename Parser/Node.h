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
	/// For node that may contain children
	Node(Tag tag, Node* previous);
	/// For an end node (no children)
	Node(std::string text, Tag tag, Node* previous);
	/// Destructor
	~Node();
	/// Get child nodes of this node
	std::vector<Node*> GetBranches();
	/// Get (string) content of this node
	std::string GetContents();
	/// Get Tag of this Node
	Tag GetTag();
	/// Add a Child node to this node
	void AddNode(Node* node);
	/// Set the (string) content of this node
	void SetContents(std::string contents);
	/// Get this nodes parent
	Node* GetPrevious();
	/// Check equality to this node
	bool equal(Node* n);
	/// Remove node from this nodes children
	void RemoveNode(Node* node);
private:
	std::string contents;
	Tag tag;
	std::vector<Node*> childNodes;
	Node* previous;
};
