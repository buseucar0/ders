#include <iostream>

#include "test.hpp"

int __stdcall main() 
{
	volatile int a = 0;
	for (;;) 
	{
		a++;
		if (a == 10)
		{
			break;
		}
	}

	std::cout << a << "\n";

	test();
	return 0;
}

