///*
//
//VCPP, GPP���� ���
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
//	int nCount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		�˰����� ���� �κ�
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}