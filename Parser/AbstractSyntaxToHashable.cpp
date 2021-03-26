/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include <vector>
#include "AbstractSyntaxToHashable.h"


// INPUT: top most node of abstract syntax tree. 
// OUTPUT: string representation of abstract syntax tree
std::string AbstractSyntaxToHashable::getHashable(Node* nd)
{
	return collapseNodes(nd);
}

// Collapse a node and all it's children recursively
std::string AbstractSyntaxToHashable::collapseNodes(Node* nd)
{
	std::vector<Node*> children = nd->getBranches();
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
			childString += collapseNodes(n);
		}

		return ownString + childString;
	}
}


// Abstract the contents of a node and returns the abstracted value
std::string AbstractSyntaxToHashable::nodeToString(Node* nd)
{
	// Only give content if an end Node
	if (nd->getBranches().size() > 0)
		return "";

	std::string content = nd->getContents();
	if (content == "")
		return "";

	Tag tag = nd->getTag();

	// Do proper abstraction for every tag
	switch (tag)
	{
		// Name tag can be a variable, functioncall or type. Look at parent to find out which
		case name_tag: 
		{
			Node *parent = nd->getPrevious();

			if (parent != nullptr)
			{
				while (parent->getTag() == name_tag)
					parent = parent->getPrevious();

				if (parent->getTag() == type_tag)
				{
					return "type";
				}
				else if (parent->getTag() == call_tag)
				{
					return "funccall";
				}
			}			
			return "var";
			break;
		}		
		default:
		{
			// If no abstraction required, just return the content
			return nd->getContents();
		}
	}
}