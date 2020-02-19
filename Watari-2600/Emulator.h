#pragma once
#include "Memory.h"

class Emulator
{
public:
	bool initializeMemory();
private:
	Memory* memory;
};

