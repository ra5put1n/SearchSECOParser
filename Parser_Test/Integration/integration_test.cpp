/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/
#include "../pch.h"
#include "Parser.h"



// GetTag function
TEST(integration, integration)
{
	std::vector<HashData> hds = Parser::parse("tools");

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.hash, "d1bf75492e51b358191be78df4a097ea");
	ASSERT_EQ(hd1.functionName, "main");
	ASSERT_EQ(hd1.fileName, "mkbb.c");
	ASSERT_EQ(hd1.lineNumber, 86);
	ASSERT_EQ(hd1.lineNumberEnd, 151);

	HashData hd2 = hds[1];
	ASSERT_EQ(hd2.hash, "5076ea70a545b1856cfe0cfc229ef036");
	ASSERT_EQ(hd2.functionName, "usage");
	ASSERT_EQ(hd2.fileName, "objstrip.c");
	ASSERT_EQ(hd2.lineNumber, 42);
	ASSERT_EQ(hd2.lineNumberEnd, 49);

	HashData hd3 = hds[2];
	ASSERT_EQ(hd3.hash, "5b5cd5fcc939f8d50aa13b4c7f70e4ab");
	ASSERT_EQ(hd3.functionName, "main");
	ASSERT_EQ(hd3.fileName, "objstrip.c");
	ASSERT_EQ(hd3.lineNumber, 52);
	ASSERT_EQ(hd3.lineNumberEnd, 284);
} 