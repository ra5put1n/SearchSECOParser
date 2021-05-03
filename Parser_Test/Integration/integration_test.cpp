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
	ASSERT_EQ(hd1.hash, "35b09a79e9280726c0795e2079ba6e05");

	HashData hd2 = hds[1];
	ASSERT_EQ(hd2.hash, "c32ef09c649c47ee60877c692e47ae47");

	HashData hd3 = hds[2];
	ASSERT_EQ(hd3.hash, "79d26f0be79270fcda7037b11e2b7fcc");
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
	ASSERT_EQ(hd1.hash, "9ffab3f3813d9de8cbd90d779c286713");

	hd1 = hds[1];
	ASSERT_EQ(hd1.hash, "66f21f61d6597cdc3402fcf5e7fd69aa");

	hd1 = hds[4];
	ASSERT_EQ(hd1.hash, "9e229cc6e64d756c43a56207352c11e7");

	hd1 = hds[5];
	ASSERT_EQ(hd1.hash, "9d724b672666cddd05296c5aa70d507f");

	hd1 = hds[8];
	ASSERT_EQ(hd1.hash, "ba8d0759cbbfb689ada188864341af4c");

	hd1 = hds[14];
	ASSERT_EQ(hd1.hash, "7521d667c7390d04b767ba31b3f314ba");

	hd1 = hds[16];
	ASSERT_EQ(hd1.hash, "02604c35dc3eb3dbcf068278cc6e1466");
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
	ASSERT_EQ(hd1.hash, "4de7c18ab0263164be018d48922d7328");

	hd1 = hds[1];
	ASSERT_EQ(hd1.hash, "685624834b651e79f6fce1edf416d381");

	hd1 = hds[5];
	ASSERT_EQ(hd1.hash, "c479a6bc42ae5efe6374c12d2c6fda67");

	hd1 = hds[13];
	ASSERT_EQ(hd1.hash, "499197bcc36799a64d9c32c671cda8a0");

	hd1 = hds[20];
	ASSERT_EQ(hd1.hash, "64bb178950272f51cf120c718b0285d0");

	hd1 = hds[24];
	ASSERT_EQ(hd1.hash, "90fe1d33f501ccdb6940e3c3fff6b60c");

	hd1 = hds[25];
	ASSERT_EQ(hd1.hash, "df16098f05883dda93d5b6f702935adf");

	hd1 = hds[27];
	ASSERT_EQ(hd1.hash, "33e89feb2aa613f7a8dc6c86b5b28788");
}