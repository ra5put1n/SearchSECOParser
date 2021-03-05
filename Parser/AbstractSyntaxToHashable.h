/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once
#include <string>
#include "Node.h"


class AbstractSyntaxToHashable
{
public:
	/// <summary>
	/// Create string representation from abract syntax tree, also abstracts
	/// </summary>
	/// <param name="nd">The top most node of an abstract syntax tree</param>
	/// <returns>string representation of abstract syntax tree</returns>
	static std::string getHashable(Node* nd);
private:
	static std::string collapseNodes(Node* nd);
	static std::string nodeToString(Node* nd);
};