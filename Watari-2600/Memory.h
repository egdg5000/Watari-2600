#pragma once
#include "stdint.h"

class Memory
{
public:
	bool Initialize();

private:
	uint8_t* memory[128];
};