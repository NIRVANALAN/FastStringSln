#include "stdafx.h"  // Ԥ����
#include "FastString.h"
#include<string.h>

FastString::FastString(char* psz)
	:m_psz(new char[strlen(psz) + 1])
{
	strcpy_s(m_psz, strlen(psz) + 1, psz);
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
