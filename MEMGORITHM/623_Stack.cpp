///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int mStack[20];
//int top = -1;
//
//void initStack()
//{
//	top = -1;
//}
//void push(int n)
//{
//	mStack[++top] = n;
//}
//
//int pop()
//{
//	return mStack[top--];
//}
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
//		initStack();
//
//		char CMD[5];
//
//		while (true)
//		{
//			cin >> CMD;
//
//			if (!strcmp(CMD, "PUSH"))
//			{
//				int n;
//				cin >> n;
//
//				if (top == 19)
//					cout << "STACK FULL" << endl;
//				else
//				{
//					push(n);
//					cout << "PUSH SUCCESS(" << n << ")" << endl;
//				}
//			}
//			else if (!strcmp(CMD, "POP"))
//			{
//				if (top == -1)
//					cout << "STACK EMPTY" << endl;
//				else
//					cout << pop() << endl;
//			}
//			else if (!strcmp(CMD, "BYE"))
//			{
//				cout << "BYE" << endl;
//				break;
//			}
//		}
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}