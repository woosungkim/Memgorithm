///*
//
//VCPP, GPP에서 사용
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
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}