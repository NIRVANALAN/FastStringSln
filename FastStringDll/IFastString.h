#pragma once

class IFastString
{
public:
	// IFastString(void);
	// virtual ~IFastString(void);
	virtual int __stdcall Length(void) = 0;       //返回该字符串的长度
	virtual int __stdcall Find(char*psz) = 0;     //查找指定的子串
	virtual void __stdcall Delete();
	virtual int _stdcall FindN(char*psz, int n);


};
