#include <iostream>

#include "emulator.h"

int main()
{
	int retVal = -1;
	do
	{
		Emulator* emulator = new Emulator;
		
		if (!emulator->initializeMemory())
		{
			break;
		}

		retVal = 10000;
	} while (false);

	return retVal;
}
