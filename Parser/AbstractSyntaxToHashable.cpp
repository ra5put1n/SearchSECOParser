/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include <vector>
#include "AbstractSyntaxToHashable.h"



#define ABSTRACT_FUNCCALL
#define ABSTRACT_TYPE
#define ABSTRACT_VARIABLE


// INPUT: top most node of abstract syntax tree. 
// OUTPUT: string representation of abstract syntax tree
AbstractionData* AbstractSyntaxToHashable::getHashable(Node *nd)
{
    AbstractionData *ad = new AbstractionData("", "");
    collapseNodes(nd, ad);
	return ad;
}

// Collapse a node and all it's children recursively
void AbstractSyntaxToHashable::collapseNodes(Node *nd, AbstractionData* ad)
{
	std::vector<Node*> children = nd->getBranches();
	nodeToString(nd, ad);

	// Return if end node
	if (children.size() == 0)
	{
		return;
	}
	else // Otherwise collapse children and return own + children value
	{
		std::string childString = "";

		for (Node* n : children)
		{
			collapseNodes(n, ad);
		}

		return;
	}
}


// Abstract the contents of a node and returns the abstracted value
void AbstractSyntaxToHashable::nodeToString(Node *nd, AbstractionData *ad)
{
    if (nd->getTag() == function_decl_tag)
    {
        int x = 5;
    }
    // Only give content if an end Node
    if (nd->getBranches().size() > 0)
        return;

    std::string content = nd->getContents();
    if (content == "")
        return;

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
#ifdef ABSTRACT_TYPE
                ad->string += "type";
#else
                ad->string += content;
#endif                
                return;
            }
            else if (parent->getTag() == call_tag)
            {           
#ifdef ABSTRACT_FUNCCALL
                ad->string += "funccall";
#else
                ad->string += content;
#endif                
                return;
            }
            else if (parent->getTag() == function_tag)
            {
                ad->string += "funcname";
                ad->funcName = content;
                return;
            }
        }
#ifdef ABSTRACT_VARIABLE
        ad->string += "var";        
#else
        ad->string += content;
#endif          
        return;
        break;
    }
    default:
    {
        // If no abstraction required, just return the content
        ad->string += content;
        return;
    }
    }
};