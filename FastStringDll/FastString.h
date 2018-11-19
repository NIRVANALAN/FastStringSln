#pragma once
#include "IFastString.h"
#include "IPO.h"
#include <iostream>

class FastString : public IFastString, public IPO
{
	char* m_psz;
	int m_cPtrs; // add pointer counter
public:
	int b;
	int a;
	FastString(char* psz):m_cPtrs(0){};
	void DuplicatePointer(void)
	{
		++m_cPtrs;
	}   //�������ü���
	void DestroyPointer(void)
	{
		if (--m_cPtrs == 0) delete this;
	}
	//�������ü���,����0ʱ,ɾ����������.

	~FastString(void);
	virtual void __stdcall Delete() override;
	virtual int __stdcall Length(void);          //���ظ��ַ����ĳ���
	virtual int __stdcall Find(char*psz);       //����ָ�����Ӵ�
	virtual int __stdcall FindN(char* psz, int n);
	virtual void __stdcall Save();
	virtual void __stdcall Dynamic(char* name, void** ppI) override;
	int fb();
	int fa();
};

// extern "C" __declspec(dllexport) FastString* CreateObject();
// extern "C" __declspec(dllexport) FastString* CreateObject(char*psz);
extern "C" __declspec(dllexport) IFastString* CreateObject(char* psz);
