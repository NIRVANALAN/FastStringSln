#include "stdafx.h"  // Ԥ����
#include "FastString.h"
#include<string.h>

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

int FastString::fa()
{
	return this->a;
}

int FastString::fb()
{
	return this->b;
}


IFastString* CreateObject(char* psz)
{
	return new FastString(psz);
}
