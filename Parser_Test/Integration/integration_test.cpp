/*This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)*/

#include "Parser.h"
#include "../pch.h"



#if defined(WIN32) || defined(_WIN32)
std::string dataLoc = "../data";
#else
std::string dataLoc = "data";
#endif // WIN32 OR _WIN32


// GetTag function
TEST(integrationCpp, integrationCppBase)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/cpp");

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.functionName, "main");
	ASSERT_EQ(hd1.fileName, "tools/mkbb.c");
	ASSERT_EQ(hd1.lineNumber, 86);
	ASSERT_EQ(hd1.lineNumberEnd, 151);

	HashData hd2 = hds[1];
	ASSERT_EQ(hd2.functionName, "usage");
	ASSERT_EQ(hd2.fileName, "tools/objstrip.c");
	ASSERT_EQ(hd2.lineNumber, 42);
	ASSERT_EQ(hd2.lineNumberEnd, 49);

	HashData hd3 = hds[2];
	ASSERT_EQ(hd3.functionName, "main");
	ASSERT_EQ(hd3.fileName, "tools/objstrip.c");
	ASSERT_EQ(hd3.lineNumber, 52);
	ASSERT_EQ(hd3.lineNumberEnd, 284);
} 

TEST(integrationCpp, integrationCppHash)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/cpp");

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.hash, "d1bf75492e51b358191be78df4a097ea");

	HashData hd2 = hds[1];
	ASSERT_EQ(hd2.hash, "5076ea70a545b1856cfe0cfc229ef036");

	HashData hd3 = hds[2];
	ASSERT_EQ(hd3.hash, "5b5cd5fcc939f8d50aa13b4c7f70e4ab");
}


TEST(integrationJava, integrationJavaBase)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/java");

	ASSERT_EQ(hds.size(), 18);

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.functionName, "binarySearch1");
	ASSERT_EQ(hd1.fileName, "BinarySearch.java");
	ASSERT_EQ(hd1.lineNumber, 6);
	ASSERT_EQ(hd1.lineNumberEnd, 17);

	hd1 = hds[1];
	ASSERT_EQ(hd1.functionName, "binarySearch3");
	ASSERT_EQ(hd1.fileName, "BinarySearch.java");
	ASSERT_EQ(hd1.lineNumber, 19);
	ASSERT_EQ(hd1.lineNumberEnd, 30);

	hd1 = hds[4];
	ASSERT_EQ(hd1.functionName, "BubbleSortInt1");
	ASSERT_EQ(hd1.fileName, "BubbleSort.java");
	ASSERT_EQ(hd1.lineNumber, 3);
	ASSERT_EQ(hd1.lineNumberEnd, 19);

	hd1 = hds[5];
	ASSERT_EQ(hd1.functionName, "BubbleSortInt2");
	ASSERT_EQ(hd1.fileName, "BubbleSort.java");
	ASSERT_EQ(hd1.lineNumber, 21);
	ASSERT_EQ(hd1.lineNumberEnd, 37);

	hd1 = hds[8];
	ASSERT_EQ(hd1.functionName, "BubbleSortDouble1");
	ASSERT_EQ(hd1.fileName, "BubbleSort.java");
	ASSERT_EQ(hd1.lineNumber, 75);
	ASSERT_EQ(hd1.lineNumberEnd, 91);

	hd1 = hds[14];
	ASSERT_EQ(hd1.functionName, "BubbleSortByte1");
	ASSERT_EQ(hd1.fileName, "BubbleSort.java");
	ASSERT_EQ(hd1.lineNumber, 183);
	ASSERT_EQ(hd1.lineNumberEnd, 199);

	hd1 = hds[16];
	ASSERT_EQ(hd1.functionName, "BubbleSortComparable1");
	ASSERT_EQ(hd1.fileName, "BubbleSort.java");
	ASSERT_EQ(hd1.lineNumber, 219);
	ASSERT_EQ(hd1.lineNumberEnd, 236);
}

TEST(integrationJava, integrationJavaHash)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/java");

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.hash, "cb0f4c5ff5f3c1c04228926d4d4d9e9d");

	hd1 = hds[1];
	ASSERT_EQ(hd1.hash, "92c537ba1fd89b37bca81374efd07ae2");

	hd1 = hds[4];
	ASSERT_EQ(hd1.hash, "72fca34a0ec774281d99189f229e0d88");

	hd1 = hds[5];
	ASSERT_EQ(hd1.hash, "61f88694e9b861922d5e608f653a1214");

	hd1 = hds[8];
	ASSERT_EQ(hd1.hash, "72fca34a0ec774281d99189f229e0d88");

	hd1 = hds[14];
	ASSERT_EQ(hd1.hash, "72fca34a0ec774281d99189f229e0d88");

	hd1 = hds[16];
	ASSERT_EQ(hd1.hash, "ec90ac728778a07162ea8ccfcffe958d");
}

TEST(integrationCSharp, integrationCSharpBase)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/csharp");

	ASSERT_EQ(hds.size(), 33);

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.functionName, "HelpTekstKleurInstellen");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 440);
	ASSERT_EQ(hd1.lineNumberEnd, 444);

	hd1 = hds[1];
	ASSERT_EQ(hd1.functionName, "BitmapOpslaan");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 446);
	ASSERT_EQ(hd1.lineNumberEnd, 467);

	hd1 = hds[5];
	ASSERT_EQ(hd1.functionName, "Smoothing");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 562);
	ASSERT_EQ(hd1.lineNumberEnd, 574);

	hd1 = hds[13];
	ASSERT_EQ(hd1.functionName, "berekenMandelbrotPixels");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 709);
	ASSERT_EQ(hd1.lineNumberEnd, 737);

	hd1 = hds[20];
	ASSERT_EQ(hd1.functionName, "mandelbrotGetal");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 864);
	ASSERT_EQ(hd1.lineNumberEnd, 908);

	hd1 = hds[24];
	ASSERT_EQ(hd1.functionName, "BitSet");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 57);
	ASSERT_EQ(hd1.lineNumberEnd, 57);

	hd1 = hds[25];
	ASSERT_EQ(hd1.functionName, "BitSet");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 59);
	ASSERT_EQ(hd1.lineNumberEnd, 59);

	hd1 = hds[27];
	ASSERT_EQ(hd1.functionName, "GetBit");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 66);
	ASSERT_EQ(hd1.lineNumberEnd, 66);

	hd1 = hds[30];
	ASSERT_EQ(hd1.functionName, "Init");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 117);
	ASSERT_EQ(hd1.lineNumberEnd, 179);
}

TEST(integrationCSharp, integrationCSharpHash)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/csharp");

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.hash, "b9e5e69a3ea7d01b4deeabb703c5b6e4");

	hd1 = hds[1];
	ASSERT_EQ(hd1.hash, "225ad4ab7dee7f360b5b7c724743b833");

	hd1 = hds[5];
	ASSERT_EQ(hd1.hash, "769238cc13bf9af7241eccf3350c2862");

	hd1 = hds[13];
	ASSERT_EQ(hd1.hash, "0af95d4304b41012e5030569539921ef");

	hd1 = hds[20];
	ASSERT_EQ(hd1.hash, "148902d702169102f2684b51fa4423f4");

	hd1 = hds[24];
	ASSERT_EQ(hd1.hash, "80b4bfabd8a7fba55dbd6d6baac6a7b5");

	hd1 = hds[25];
	ASSERT_EQ(hd1.hash, "8f27ea737430bb9f5fdaa77d86df90a8");

	hd1 = hds[27];
	ASSERT_EQ(hd1.hash, "fc0f64dc27602fcc539e891882ce4910");

	hd1 = hds[30];
	ASSERT_EQ(hd1.hash, "ecd74d47c4858d22cbe4979b8e22ef13");
}