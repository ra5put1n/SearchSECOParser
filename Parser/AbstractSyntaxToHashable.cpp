#include <vector>

#include "Node.h"
#include "AbstractSyntaxToHashable.h"


// INPUT: top most node of abstract syntax tree. 
// OUTPUT: string representation of abstract syntax tree
std::string AbstractSyntaxToHashable::getHashable(Node nd)
{
	return collapseNodes(nd);
}


// Collapse a node and all it's children recursively
std::string AbstractSyntaxToHashable::collapseNodes(Node nd)
{
	// Get the children
	std::vector<Node*> children = nd.GetBranches();
	// Find own value
	std::string ownString = nodeToString(nd);

	// Return own value if end node
	if (children.size() == 0)
	{
		return ownString;
	}
	else // Otherwise collapse children and return own + children value
	{
		std::string childString = "";

		for (Node* n : children)
		{
			childString += collapseNodes(*n);
		}

		return ownString + childString;
	}
}


// Abstract the contents of a node and returns the abstracted value
std::string AbstractSyntaxToHashable::nodeToString(Node nd)
{
	return nd.GetContents();
}