///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//
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
//		int row, col;
//		cin >> row >> col;
//
//		int nPaper, nWrong;
//		cin >> nPaper >> nWrong;
//
//		bool wrongCheck[1000001] = { false };
//		
//		int maxVerti = 0, maxHori = 0;
//		for (int i = 0; i < nWrong; i++)
//		{
//			int r, c;
//			cin >> r >> c;
//			if (maxVerti < r)
//				maxVerti = r;
//			if (maxHori < c)
//				maxHori = c;
//			wrongCheck[c] = true;
//		}
//
//		int minSize = maxVerti;
//		int maxSize = maxHori;
//
//		for (int i = minSize; i <= maxSize; i++)
//		{
//			int paperCnt = 0;
//			for (int j = 1; j <= maxHori; )
//			{
//				if (wrongCheck[j])
//				{
//					j += i;
//					paperCnt++;
//				}
//				else
//					j++;
//			}
//			if (paperCnt <= nPaper)
//			{
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}