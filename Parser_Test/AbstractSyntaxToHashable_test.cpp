#include "pch.h"
#include "../Parser/AbstractSyntaxToHashable.cpp"
#include "../Parser/Node.cpp"


// getHashable function
TEST(AbstractSyntaxToHashable_getHashable, oneNodeEmpty) {
	Node* n = new Node("", unknown_tag, nullptr);
	EXPECT_EQ(AbstractSyntaxToHashable::getHashable(*n), "");
}

TEST(AbstractSyntaxToHashable_getHashable, oneNodeNotEmpty) {
	std::string s = "test";
	Node* n = new Node(s, unknown_tag, nullptr);
	EXPECT_EQ(AbstractSyntaxToHashable::getHashable(*n), s);
}

TEST(AbstractSyntaxToHashable_getHashable, oneNodeNotEmptyAbstracted) {
	std::string s = "test";
	Node* n = new Node(s, name_tag, nullptr);
	EXPECT_EQ(AbstractSyntaxToHashable::getHashable(*n), "var");
}


TEST(AbstractSyntaxToHashable_getHashable, manyNodesAbstraction) {

	std::string s2 = "";
	std::string s3 = "test3";
	std::string s4 = "test4";
	std::string s5 = "test5";
	std::string s6 = "test6";
	std::string s7 = "test7";

	Node* n1 = new Node(unknown_tag, nullptr);

	Node* n2 = new Node(s2, type_tag, n1);
	n1->AddNode(n2);

	Node* n3 = new Node(s3, name_tag, n2);
	n2->AddNode(n3);

	Node* n4 = new Node(s4, name_tag, n1);
	n1->AddNode(n4);

	Node* n5 = new Node(s5, call_tag, n1);
	n1->AddNode(n5);

	Node* n6 = new Node(s6, decl_tag, n1);
	n1->AddNode(n6);

	Node* n7 = new Node(s7, name_tag, n5);
	n5->AddNode(n7);

	EXPECT_EQ(AbstractSyntaxToHashable::getHashable(*n1), s2 + "type" + "var" + "funccall" + s6);
}