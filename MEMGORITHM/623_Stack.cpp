///*
//
//VCPP, GPP���� ���
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}