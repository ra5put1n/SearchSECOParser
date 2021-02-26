/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "pch.h"
#include "StringStreamMock.h"
#include "../Parser/XmlParser.h"
#include "../Parser/XmlParser.cpp"
#include "../Parser/md5.cpp"

TEST(GetNextTagTests, BasicInput)
{
	StringStreamMock* ssm = new StringStreamMock("dataBefore<Tag extra arguments>");
	XmlParser xmlParser = XmlParser();
	TagData out = xmlParser.GetNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "extra arguments");
	EXPECT_EQ(out.textBefore, "dataBefore");

	delete ssm;
	ssm = new StringStreamMock("dataBefore<Tag>");
	out = xmlParser.GetNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(GetNextTagTests, IncompleteInput)
{
	StringStreamMock* ssm = new StringStreamMock("dataBefore<Tag");
	XmlParser xmlParser = XmlParser();
	TagData out = xmlParser.GetNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(GetNextTagTests, RemoveWhiteSpace)
{
	StringStreamMock* ssm = new StringStreamMock("d a t a B e f o r e		\r\n<Tag A R G S>");
	XmlParser xmlParser = XmlParser();
	TagData out = xmlParser.GetNextTag(ssm);
	EXPECT_EQ(out.tag, "Tag");
	EXPECT_EQ(out.textInTag, "A R G S");
	EXPECT_EQ(out.textBefore, "dataBefore");
	delete ssm;
}

TEST(ParseXMLTests, SimpleFile)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml version="1.0" encoding="UTF - 8" standalone="yes"?><type><name>int</name></type>)");
	Node* xml = new Node(unknown_tag, nullptr);
	Node* type = new Node(TagMap::getTag("type"), xml);
	Node* name = new Node(TagMap::getTag("name"), type);
	xml->AddNode(type);
	type->AddNode(name);
	name->AddNode(new Node("int", TagMap::getTag("name"), name));
	XmlParser xmlParser = XmlParser();
	xmlParser.ParseXML(ssm, false);
	
	EXPECT_TRUE(xmlParser.GetTree()->equal(xml));
}

TEST(ParseXMLTests, SimpleFile2)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml version="1.0" encoding="UTF - 8" standalone="yes"?><comment>SomeTextHere</comment><unit><function someArgs><type>int</type></function><function someArgs><type>int</type></function></unit>)");
	Node* xml = new Node(unknown_tag, nullptr);
	Node* unit = new Node(TagMap::getTag("unit"), xml);
	Node* function = new Node(TagMap::getTag("function"), unit);
	function->SetContents("someArgs");
	Node* type = new Node(TagMap::getTag("type"), function);
	xml->AddNode(unit);
	unit->AddNode(function);
	unit->AddNode(function);
	function->AddNode(type);
	type->AddNode(new Node("int", TagMap::getTag("type"), type));
	XmlParser xmlParser = XmlParser();
	xmlParser.ParseXML(ssm, false);

	EXPECT_TRUE(xmlParser.GetTree()->equal(xml));
}

TEST(ParseXMLTests, NoXML)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<type><name>int</name></type>)");
	XmlParser xmlParser = XmlParser();
	xmlParser.ParseXML(ssm, false);

	EXPECT_EQ(xmlParser.GetTree(), nullptr);
}

TEST(ParseXMLTests, WrongClosingTags)
{
	StringStreamMock* ssm = new StringStreamMock(R"(<?xml><type><name>int</type></name>)");
	XmlParser xmlParser = XmlParser();
	xmlParser.ParseXML(ssm, false);

	EXPECT_EQ(xmlParser.GetTree(), nullptr);
}
