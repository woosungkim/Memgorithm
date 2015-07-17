///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define ERROR -2
//#define GND -1
//
//char fStack[101][71];
//char bStack[101][71];
//
//int fTop;
//int bTop;
//void initStack()
//{
//	fTop = -1;
//	bTop = -1;
//}
//void fpush(char url[])
//{
//	strcpy_s(fStack[++fTop], url);
//}
//void bpush(char url[])
//{
//	strcpy_s(bStack[++bTop], url);
//}
//
//char* fpop()
//{
//	if (fTop == GND)
//		return "GND";
//	return fStack[fTop--];
//}
//char* bpop()
//{
//	if (bTop == GND)
//		return "GND";
//	return bStack[bTop--];
//}
//
//int main()
//{
//
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//
//		initStack();
//
//		char URL[71] = "https://secmem.org/";
//		while (true)
//		{
//			char CMD[100];
//			cin >> CMD;
//
//			bool isIgnored = false;
//			if (!strcmp(CMD, "BACK"))
//			{
//				
//				if (bTop == GND)
//					isIgnored = true;
//				else
//				{
//					fpush(URL);
//					strcpy_s(URL, bpop());
//				}
//
//			}
//			else if (!strcmp(CMD, "FORWARD"))
//			{
//				
//				if (fTop == GND)
//					isIgnored = true;
//				else
//				{
//					bpush(URL);
//					strcpy_s(URL, fpop());
//				}
//			}
//			else if (!strcmp(CMD, "VISIT"))
//			{
//				bpush(URL);
//				cin >> URL;
//				fTop = -1;
//			}
//			else if (!strcmp(CMD, "QUIT"))
//			{
//				break;
//			}
//			
//			if (isIgnored)
//				cout << "Ignored" << endl;
//			else
//				cout << URL << endl;
//		}
//		
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}