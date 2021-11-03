/*
This program has been developed by students from the bachelor Computer Science at
Utrecht University within the Software Project course.
© Copyright Utrecht University(Department of Informationand Computing Sciences)
*/

#include "../pch.h"
#include "Parser.h"
#include <iostream>

#include <map>

bool stopped = false;

#if defined(WIN32) || defined(_WIN32)
std::string dataLoc = "../data";
#else
std::string dataLoc = "data";
#endif // WIN32 OR _WIN32

// GetTag function
TEST(integrationCpp, integrationCppBase)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/cpp");
	
	std::cout << "Hashes: " << hds.size() << std::endl;

	ASSERT_EQ(hds.size(), 3);

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
	
	ASSERT_EQ(hds.size(), 3);

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
	
	ASSERT_EQ(hds.size(), 18);

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

	ASSERT_EQ(hds.size(), 25);

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.functionName, "BitmapOpslaan");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 446);
	ASSERT_EQ(hd1.lineNumberEnd, 467);

	hd1 = hds[1];
	ASSERT_EQ(hd1.functionName, "HaalInteressantPuntOp");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 469);
	ASSERT_EQ(hd1.lineNumberEnd, 491);

	hd1 = hds[4];
	ASSERT_EQ(hd1.functionName, "Smoothing");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 562);
	ASSERT_EQ(hd1.lineNumberEnd, 574);

	hd1 = hds[11];
	ASSERT_EQ(hd1.functionName, "berekenMandelbrotPixels");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 709);
	ASSERT_EQ(hd1.lineNumberEnd, 737);

	hd1 = hds[17];
	ASSERT_EQ(hd1.functionName, "mandelbrotGetal");
	ASSERT_EQ(hd1.fileName, "Mandelbrot.cs");
	ASSERT_EQ(hd1.lineNumber, 864);
	ASSERT_EQ(hd1.lineNumberEnd, 908);

	hd1 = hds[20];
	ASSERT_EQ(hd1.functionName, "SetMouseState");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 76);
	ASSERT_EQ(hd1.lineNumberEnd, 96);

	hd1 = hds[21];
	ASSERT_EQ(hd1.functionName, "SetScroll");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 98);
	ASSERT_EQ(hd1.lineNumberEnd, 114);

	hd1 = hds[22];
	ASSERT_EQ(hd1.functionName, "Init");
	ASSERT_EQ(hd1.fileName, "game.cs");
	ASSERT_EQ(hd1.lineNumber, 117);
	ASSERT_EQ(hd1.lineNumberEnd, 179);
}

TEST(integrationCSharp, integrationCSharpHash)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/csharp");
	
	ASSERT_EQ(hds.size(), 25);

	HashData hd1 = hds[0];
	ASSERT_EQ(hd1.hash, "685624834b651e79f6fce1edf416d381");

	hd1 = hds[1];
	ASSERT_EQ(hd1.hash, "ede20d2efb3a471951edb1448fb5327e");

	hd1 = hds[4];
	ASSERT_EQ(hd1.hash, "c479a6bc42ae5efe6374c12d2c6fda67");

	hd1 = hds[11];
	ASSERT_EQ(hd1.hash, "09c5c9c6efba9285810be9a57d321472");

	hd1 = hds[17];
	ASSERT_EQ(hd1.hash, "b265242c314d87b5f35eb2c78a8e4bd4");

	hd1 = hds[20];
	ASSERT_EQ(hd1.hash, "21ce4cfb98987174285f2eb09d09a10e");

	hd1 = hds[21];
	ASSERT_EQ(hd1.hash, "90fe1d33f501ccdb6940e3c3fff6b60c");

	hd1 = hds[22];
	ASSERT_EQ(hd1.hash, "df16098f05883dda93d5b6f702935adf");
}

TEST(integrationPython3, integrationPython3Base)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/python3");

	ASSERT_EQ(hds.size(), 11);

	// Check regardless of permutation because of multithreading.
	for (int i = 0; i < hds.size(); i++)
	{
		// Ignore hashes for now.
		hds[i].hash = "";
	}

	// Check for several expected functions.
	std::vector<HashData> hds_exp = std::vector<HashData>{
		HashData("", "__init__", "hash_table.py", 12, 18),
		HashData("", "_collision_resolution", "hash_table.py", 52, 63),
		HashData("", "insert_data", "hash_table.py", 73, 88),
		HashData("", "__init__", "tool.py", 32, 45),
		HashData("", "update", "tool.py", 53, 60),
		HashData("", "event_loop", "tool.py", 68, 79),
		HashData("", "load_all_gfx", "tool.py", 123, 156),
	};

	for (int i = 0; i < hds_exp.size(); i++)
	{
		ASSERT_NE(std::find(begin(hds), end(hds), hds_exp[i]), end(hds));
	}
}

TEST(integrationPython3, integrationPython3Hash)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/python3");
	
	ASSERT_EQ(hds.size(), 11);

	// Check regardless of permutation because of multithreading.
	std::map<std::string, int> hm;
	for (int i = 0; i < hds.size(); i++)
	{
		// Only check hashes.
		hm[hds[i].hash]++;
	}

	// Check for several expected hashes.
	std::vector<std::string> hds_exp = std::vector<std::string>{
		"3c085b3350ba3845848966ded5c5270a", "be9829d537340b830fde528c0036b7e8", "a0c3121f66df414f47517bc0e9e0e61c",
		"78e30bcecd0e0368149c199e80c6d9d5", "7d50b200c1daff6aa321c5fad7c9a680", "1201c61b79c65ae041cf4b3db2edf852",
		"8881a990ed16c075065c239e50433f64",
	};

	for (int i = 0; i < hds_exp.size(); i++)
	{
		ASSERT_NE(hm[hds_exp[i]], 0);
		hm[hds_exp[i]]--;
	}
}

TEST(integrationJavaScript, integrationJavaScriptBase)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/javascript");
	
	ASSERT_EQ(hds.size(), 6);

	// Ignore hashes.
	for (int i = 0; i < hds.size(); i++)
	{
		hds[i].hash = "";
	}

	// Check for expected functions.
	std::vector<HashData> hds_exp = std::vector<HashData>{
		HashData("", "identicalFunction0", "nested.js", 24, 30),
		HashData("", "identicalFunction1", "nested.js", 32, 41),
		HashData("", "identicalFunction2", "nested.js", 43, 51),
		HashData("", "childFunction", "nested.js", 58, 65),
		HashData("", "parentFunction", "nested.js", 53, 78),
		HashData("", "commentFunction", "nested.js", 84, 96),
	};

	for (int i = 0; i < hds_exp.size(); i++)
	{
		ASSERT_NE(std::find(begin(hds), end(hds), hds_exp[i]), end(hds));
	}

	// Check for non-expected functions.
	for (int i = 0; i < hds.size(); i++)
	{
		ASSERT_NE(hds[i].functionName, "a");
		ASSERT_NE(hds[i].functionName, "d");
		ASSERT_NE(hds[i].functionName, "shortFunction");
		ASSERT_NE(hds[i].functionName, "incarceratedFunction");
	}
}

TEST(integrationJavaScript, integrationJavaScriptAbstraction)
{
	std::vector<HashData> hds = Parser::parse(dataLoc + "/javascript");
	
	ASSERT_EQ(hds.size(), 6);

	// Test if similar functions are abstracted the same.
	std::string hash = "";
	for (int i = 0; i < hds.size(); i++)
	{
		if (hds[i].functionName == "identicalFunction0" || 
			hds[i].functionName == "identicalFunction1" ||
			hds[i].functionName == "identicalFunction2")
		{
			if (hash == "")
			{
				hash = hds[i].hash;
			}
			else
			{
				ASSERT_EQ(hash, hds[i].hash);
			}
		}
	}
}