#include "stdafx.h"  // 预编译
#include "FastString.h"
#include<string.h>

FastString::FastString(char* psz)
	:m_psz(new char[strlen(psz) + 1])
{
	strcpy_s(m_psz, strlen(psz) + 1, psz);
}  //分配内存

FastString::~FastString(void)
{
	delete[]m_psz;
}    //释放内存

int FastString::Length(void) {
	return strlen(m_psz);
}  //计算长度

int FastString::Find(char*psz)
{
	return 0;
} //省略, 这不是我们讨论的重点
