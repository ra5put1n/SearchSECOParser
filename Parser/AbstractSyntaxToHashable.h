/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
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