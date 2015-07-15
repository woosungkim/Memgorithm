///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int mk[10], sy[10];
//		for (int i = 0; i < 10; i++)
//			cin >> mk[i];
//		for (int i = 0; i < 10; i++)
//			cin >> sy[i];
//
//		int mkWin = 0;
//		int syWin = 0;
//
//		for (int i = 0; i < 10; i++)
//		{
//			if (mk[i] > sy[i])
//				mkWin++;
//			else if (mk[i] < sy[i])
//				syWin++;
//		}
//
//		if (mkWin > syWin)
//			cout << "민교" << endl;
//		else if (mkWin < syWin)
//			cout << "수영" << endl;
//		else
//			cout << "D" << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}