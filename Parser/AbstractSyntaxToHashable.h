#pragma once
#include <string>
#include "Node.h"


class AbstractSyntaxToHashable
{
public:
	// INPUT: top most node of abstract syntax tree. 
	// OUTPUT: string representation of abstract syntax tree
	static std::string getHashable(Node nd);
private:
	static std::string collapseNodes(Node nd);
	static std::string nodeToString(Node nd);
};