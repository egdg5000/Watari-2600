#include "Memory.h"

bool Memory::Initialize()
{
	bool retVal = false;

	do
	{
		for (int i = 0; i < 128; i++)
		{
			memory[i] = 0;
		}

		retVal = true;
	} while (false);

	return retVal;
}