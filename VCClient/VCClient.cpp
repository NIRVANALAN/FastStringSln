// VCClient.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "FastString.h"
// #include "FastString.h"

using namespace std;

int main()
{
	// FastString *pFS = new FastString((char*)"fdfddddd");
	// IFastString *pIFS = CreateObject((char*)"fdfddddd");
	// int res = pIFS->Length();
	// IPO* p_ipo = dynamic_cast<IPO*>(pIFS);
	// p_ipo->Save();
	// delete pIFS;

	// interface coupling
	// IFastString *pIFS = CreateObject((char*)"fdfd");
	// IPO *ppo;
	// pIFS->Find((char*)"a");
	// // void** t;
	// pIFS->Dynamic((char*)"IPO", (void**)&ppo);
	// // PPO = t;
	// if (ppo!=nullptr)
	// {
	// 	// ppo->Delete();
	// 	// t->Save();
	// }
	// pIFS->Delete();

	// interface ptr counting
	IFastString *pfs;    IPO *ppo;
	pfs = CreateObject("asdf");     //ref=1
	if (pfs) {
		pfs->Find((char*)"a");
		pfs->Dynamic((char*)"IPersistentObject",(void**)ppo);
		//ref=2    
		if (ppo) {
			ppo->Save();
			ppo->DestroyPointer();
		}  //销毁ppo  ref=1
		pfs->DestroyPointer(); //销毁pfs  ref=0 对象销毁
	} //每个指针各自负责自己的引用计数操作。


	// int res = pIFS->Length();
	// IPO *pIPO = dynamic_cast<IPO*>(pIFS);
	// pIPO->Save();
	// delete pIFS;

	// delete pFS;
	// bool b = _CrtDumpMemoryLeaks();
	// cout << b << endl;
	// cout << res << endl;
	// cout << pFS->a << endl;
	// cout << pFS->b << endl;
	// cout << pFS->fa() << endl;
	// cout << pFS->fb() << endl;
	// cout << pFS->FindN((char*)"ls", 0)<<endl;

	//system("pause");
	return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
