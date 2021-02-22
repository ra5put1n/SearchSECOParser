#pragma once
#include <string>
#include "Node.h"


class AbstractSyntaxToHashable
{
public:
	// INPUT: top most node of abstract syntax tree. 
	// OUTPUT: string representation of abstract syntax tree
	std::string getHashable(Node nd);
private:
	std::string collapseNodes(Node nd);
	std::string nodeToString(Node nd);
};