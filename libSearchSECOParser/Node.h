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
	/// For node that may contain children.
	Node(Tag tag, Node* previous);
	/// For an end node (no children).
	Node(std::string text, Tag tag, Node* previous);
	/// Destructor.
	~Node();
	/// <summary>
	/// Get the children of the Node.
	/// </summary>
	/// <returns>Vector containing children.</returns>
	std::vector<Node*> getBranches();
	/// <summary>
	/// Get the content of the node.
	/// </summary>
	/// <returns>Content of the node.</returns>
	std::string getContents();
	/// <summary>
	/// Get the tag of the node.
	/// </summary>
	/// <returns>Tag of the node.</returns>
	Tag getTag();
	/// <summary>
	/// Add a child to this node.
	/// </summary>
	/// <param name="node">Child node to add.</param>
	void addNode(Node* node);
	/// <summary>
	/// Set the content of the node.
	/// </summary>
	/// <param name="contents">Value to set content to.</param>
	void setContents(std::string contents);
	/// <summary>
	/// Get this nodes parent.
	/// </summary>
	/// <returns>Pointer to parent node (nullptr if none).</returns>
	Node* getPrevious();
	/// <summary>
	/// Check if a node is equal to another.
	/// </summary>
	/// <param name="n">Node to compare to.</param>
	/// <returns>True if equal, false otherwise.</returns>
	bool equal(Node* n);
	/// <summary>
	/// Remove a node from this node's children.
	/// </summary>
	/// <param name="node">Node to remove.</param>
	void removeNode(Node* node);
private:
	std::string contents;
	Tag tag;
	std::vector<Node*> childNodes;
	Node* previous;
};
