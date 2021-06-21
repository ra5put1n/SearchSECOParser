/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#include <vector>
#include "AbstractSyntaxToHashable.h"



#define ABSTRACT_FUNCCALL
//#define ABSTRACT_TYPE
#define ABSTRACT_VARIABLE


// INPUT: top most node of abstract syntax tree. 
// OUTPUT: string representation of abstract syntax tree.
AbstractionData* AbstractSyntaxToHashable::getHashable(Node *nd, bool testing)
{
	AbstractionData* ad = new AbstractionData("", "");
	if (testing)
	{
		collapseNodes(nd, ad, true);
		return ad;
	}
	for (Node* n : nd->getBranches())
	{
		if (n->getTag() == block_tag)
		{
			for (Node* n2 : n->getBranches())
			{
				if (n2->getTag() == block_content_tag)
				{
					collapseNodes(n2, ad, true);
				}
			}
		}
		else
		{
			collapseNodes(n, ad, false);
		}
	}
	return ad;
}

// Collapse a node and all it's children recursively.
void AbstractSyntaxToHashable::collapseNodes(Node *nd, AbstractionData* ad, bool inFunction)
{
	std::vector<Node*> children = nd->getBranches();
	nodeToString(nd, ad, inFunction);

	// Return if end node.
	if (children.size() == 0)
	{
		return;
	}
	else // Otherwise collapse children and return own + children value.
	{
		std::string childString = "";

		for (Node* n : children)
		{
			collapseNodes(n, ad, inFunction);
		}

		return;
	}
}


// Abstract the contents of a node and returns the abstracted value.
void AbstractSyntaxToHashable::nodeToString(Node *nd, AbstractionData *ad, bool inFunction)
{
	// Only give content if an end Node.
	if (nd->getBranches().size() > 0)
	{
		return;
	}

	std::string content = nd->getContents();    

	if (content == "")
	{
		return;
	}

	Tag tag = nd->getTag();

	// Do proper abstraction for every tag.
	switch (tag)
	{
	// Name tag can be a variable, functioncall or type. Look at parent to find out which.
	case name_tag:
	{
		Node *parent = nd->getPrevious();

		if (parent != nullptr)
		{
			while (parent->getTag() == name_tag)
			{
				parent = parent->getPrevious();
			}

			if (parent->getTag() == type_tag)
			{
				if (inFunction)
				{
#ifdef ABSTRACT_TYPE
					ad->string += "type";
#else
					ad->string += content;
#endif                
				}
				return;
			}
			else if (parent->getTag() == call_tag)
			{
				if (inFunction)
				{
#ifdef ABSTRACT_FUNCCALL
					ad->string += "funccall";
#else
					ad->string += content;
#endif                
				}
				return;
			}
			else if (parent->getTag() == function_tag)
			{

				if (inFunction)
				{
					ad->string += "funcname";
				}
				ad->funcName = content;
				return;
			}
		}
		if (inFunction)
		{
#ifdef ABSTRACT_VARIABLE
			ad->string += "var";
#else
			ad->string += content;
#endif          
		}
		return;
		break;
	}
	default:
	{
		// If no abstraction required, just return the content.
		if (inFunction)
		{
			ad->string += content;
		}
		return;
	}
	}
};