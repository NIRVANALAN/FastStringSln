#pragma once
#include "IEO.h"

class IPO:public IEO
{
public:
	// virtual void _stdcall Delete() = 0;
	virtual void _stdcall Save() = 0;

};
