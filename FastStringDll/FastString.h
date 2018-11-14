#pragma once
#include "IFastString.h"
#include "IPO.h"

class FastString : public IFastString, public IPO
{
	char* m_psz;
public:
	int b;
	int a;
	FastString(char* psz);
	~FastString(void);
	virtual int __stdcall Length(void);          //返回该字符串的长度
	virtual int __stdcall Find(char*psz);       //查找指定的子串
	int fb();
	int fa();
};

// extern "C" __declspec(dllexport) FastString* CreateObject();
// extern "C" __declspec(dllexport) FastString* CreateObject(char*psz);
extern "C" __declspec(dllexport) IFastString* CreateObject(char* psz);
