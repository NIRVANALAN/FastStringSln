#include "stdafx.h"  // Ԥ����
#include "FastString.h"
#include<string.h>
#include <iostream>

FastString::FastString(char* psz)
	:m_psz(new char[strlen(psz) + 1])
{
	strcpy_s(m_psz, strlen(psz) + 1, psz);
	a = 2;
	b = 5;
}  //�����ڴ�

FastString::~FastString(void)
{
	delete[]m_psz;
}    //�ͷ��ڴ�

int FastString::Length(void) {
	return strlen(m_psz);
}  //���㳤��

int FastString::Find(char*psz)
{
	return 0;
} //ʡ��, �ⲻ���������۵��ص�

int FastString::FindN(char * psz, int n)
{
	return 0;
}

void __stdcall FastString::Save()
{
	std::cout<<"saved"<<std::endl;
}

// void __stdcall FastString::Save()
// {
// 	std::cout << "saved" << std::endl;
// }

int FastString::fa()
{
	return this->a;
}

int FastString::fb()
{
	return this->b;
}

void FastString::Delete()
{
	delete this;
}


IFastString* CreateObject(char* psz)
{
	return new FastString(psz);
}

void FastString::Dynamic(char *name, void**ppI)
{
	if (strcmp(name, "IFastString") == 0)
		*ppI = (IFastString*)this;
	else if (strcmp(name, "IPO") == 0)
		*ppI = (IPO*)this;
	else  if (strcmp(name, "IEO") == 0)
		*ppI = (IPO*)this;
}
