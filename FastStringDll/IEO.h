#pragma once

class IEO
{
public:
	virtual void _stdcall Dynamic(char* name, void** ppI) = 0;
	virtual void _stdcall Delete() = 0;

};
