/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#pragma once
#include <string>
#include "Node.h"




struct AbstractionData
{

  public:
    /// <summary>
    /// All info returned from a abstracted syntax tree
    /// </summary>
    /// <param name="string">String representation of abstract syntax tree</param>
    /// <param name="funcCalls">Set of all functions called by this function</param>
    /// <param name="funcName">This functions name</param>
    AbstractionData(std::string string = "", std::string funcName = "")
    {
        this->string = string;
        this->funcName = funcName;
    };
    std::string string, funcName;
};




class AbstractSyntaxToHashable
{
public:
	/// <summary>
	/// Create string representation from abract syntax tree, also abstracts
	/// </summary>
	/// <param name="nd">The top most node of an abstract syntax tree</param>
	/// <returns>string representation of abstract syntax tree</returns>
  static AbstractionData* getHashable(Node *nd);
private:
  static void collapseNodes(Node *nd, AbstractionData* ad);
  static void nodeToString(Node *nd, AbstractionData* ad);
};