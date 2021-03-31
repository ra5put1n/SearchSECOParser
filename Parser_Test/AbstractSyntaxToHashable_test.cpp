/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "pch.h"
#include "../Parser/AbstractSyntaxToHashable.cpp"
#include "../Parser/Node.cpp"


// getHashable function
TEST(AbstractSyntaxToHashable_getHashable, oneNodeEmpty) {
	Node* n = new Node("", unknown_tag, nullptr);
    EXPECT_EQ(AbstractSyntaxToHashable::getHashable(n)->string, "");
}

TEST(AbstractSyntaxToHashable_getHashable, oneNodeNotEmpty) {
	std::string s = "test";
	Node* n = new Node(s, unknown_tag, nullptr);
    EXPECT_EQ(AbstractSyntaxToHashable::getHashable(n)->string, s);
}

TEST(AbstractSyntaxToHashable_getHashable, oneNodeNotEmptyAbstracted) {
	std::string s = "test";
	Node* n = new Node(s, name_tag, nullptr);
	EXPECT_EQ(AbstractSyntaxToHashable::getHashable(n)->string, "var");
}

TEST(AbstractSyntaxToHashable_getHashable, manyNodesAbstraction)
{
    std::string s2 = "";
    std::string s3 = "test3";
    std::string s4 = "test4";
    std::string s5 = "test5";
    std::string s6 = "test6";
    std::string s7 = "test7";

    Node *n1 = new Node(unknown_tag, nullptr);

    Node *n2 = new Node(s2, type_tag, n1);
    n1->addNode(n2);

    Node *n3 = new Node(s3, name_tag, n2);
    n2->addNode(n3);

    Node *n8 = new Node(s3, name_tag, n2);
    n2->addNode(n8);

    Node *n9 = new Node(s4, name_tag, n8);
    n8->addNode(n9);

    Node *n4 = new Node(s4, name_tag, n1);
    n1->addNode(n4);

    Node *n5 = new Node(s5, call_tag, n1);
    n1->addNode(n5);


    Node *n7 = new Node(s7, name_tag, n5);
    n5->addNode(n7);

    Node *n10 = new Node(s5, function_tag, n1);
    n1->addNode(n10);

    Node *n11 = new Node(s7, name_tag, n10);
    n10->addNode(n11);

    Node *n6 = new Node(s6, decl_tag, n1);
    n1->addNode(n6);

    AbstractionData *data = AbstractSyntaxToHashable::getHashable(n1);
    EXPECT_EQ(data->string, s2 + "type" + "type" + "var" + "funccall" + "funcname" + s6);
    EXPECT_TRUE(data->funcName == s7);

    n1->removeNode(n6);
    EXPECT_EQ(AbstractSyntaxToHashable::getHashable(n1)->string, s2 + "type" + "type" + "var" + "funccall" + "funcname");
}
