///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//#define DEC -1
//#define NO 0
//#define INC 1
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
//		while (true)
//		{
//			char n[11];
//			cin >> n;
//
//			if (!strcmp(n, "0"))
//				break;
//
//			int len = strlen(n);
//			if (len == 1)
//				cout << "bouncy" << endl;
//			else
//			{
//				bool isBouncy = false;
//
//				int direction = NO;
//				for (int i = 0; i < len - 1; i++)
//				{
//					if (n[i] < n[i + 1])
//					{
//						direction = INC;
//						break;
//					}
//					else if (n[i] > n[i + 1])
//					{
//						direction = DEC;
//						break;
//					}
//				}
//				
//				int dirCheck = direction;
//				for (int i = 0; i < len-1; i++)
//				{
//					if (n[i] < n[i + 1])
//						dirCheck = INC;
//					else if (n[i] > n[i + 1])
//						dirCheck = DEC;
//
//					if (direction != dirCheck)
//					{
//						isBouncy = true;
//					}
//					
//				}
//
//				if (isBouncy)
//					cout << "bouncy" << endl;
//				else
//					cout << "no bouncy" << endl;
//			}
//		}
//		
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}