#include "Emulator.h"

bool Emulator::initializeMemory()
{
	bool retVal = false;
	do
	{
		memory = new Memory;
		if (!memory->Initialize())
		{
			break;
		}

		retVal = true;
	} while (false);

	return retVal;
}