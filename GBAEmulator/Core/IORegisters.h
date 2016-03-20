#pragma once
#include "stdafx.h"
#include "MemoryBus.h"
#include "MemoryDevice.h"

class IORegisters : public MemoryDevice
{
	friend class LCDVideoController;
private:
	uint8_t mMemory[0x1000];
public:
	IORegisters()
	{
		ZeroMemory(&mMemory[0], sizeof(mMemory));
	}
	void HandleRequest(MemoryBus* memoryBus);
};