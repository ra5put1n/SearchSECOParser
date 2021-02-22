#include <iostream>
#include "SrcMLCaller.h"

int main()
{
	StringStream* ss = SrcMLCaller::StartSrcML("C:\\Users\\ilan\\Downloads\\linux-master\\linux-master\\kernel\\bounds.c");
	for(int i = 0; i < 1000; i++)
	{
		std::cout << ss->NextChar();
	}
	return 0;
}