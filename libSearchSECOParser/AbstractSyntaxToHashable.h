/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Information and Computing Sciences)
*/
#pragma once

#include <string>

#include "Node.h"

struct AbstractionData
{
  public:
	/// <summary>
	/// All info returned from a abstracted syntax tree.
	/// </summary>
	/// <param name="string">String representation of abstract syntax tree.</param>
	/// <param name="funcName">This functions name.</param>
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
	/// Create string representation from abract syntax tree, also abstracts.
	/// </summary>
	/// <param name="nd">The top most node of an abstract syntax tree.</param>
	/// <param name="testing">Used for unit testing, can be ignored for normal use.</param>
	/// <returns>string representation of abstract syntax tree.</returns>
  static AbstractionData* getHashable(Node *nd, bool testing = false);
private:
  /// <summary>
  /// Collapses a node and all its children.
  /// </summary>
  /// <param name="nd">Node to collapse.</param>
  /// <param name="ad">AbstractionData to write data to.</param>
  /// <param name="inFunction">Whether the functionbody has been entered yet.</param>
  static void collapseNodes(Node *nd, AbstractionData* ad, bool inFunction);
  /// <summary>
  /// Gets the string content of the node, also applies abstraction if appropriate.
  /// </summary>
  /// <param name="nd">Node to get the string from.</param>
  /// <param name="ad">AbstractionData to write data to.</param>
  /// <param name="inFunction">Whether the functionbody has been entered yet.</param>
  static void nodeToString(Node *nd, AbstractionData* ad, bool inFunction);
};