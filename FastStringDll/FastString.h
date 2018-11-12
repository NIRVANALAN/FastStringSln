#pragma once
class __declspec(dllexport)  FastString
{
	char * m_psz;
public:
	FastString(char*psz);
	~FastString(void);
	int Length(void);
	int Find(char*psz);
};

