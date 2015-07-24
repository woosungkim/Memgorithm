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
//		int station[4][2];
//		for (int i = 0; i < 4; i++)
//		{
//			cin >> station[i][0] >> station[i][1];
//		}
//	
//
//		int MAX = 0;
//		int nMan = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			nMan -= station[i][0];
//			nMan += station[i][1];
//
//			MAX = nMan>MAX ? nMan : MAX;
//		}
//
//		cout << MAX << endl;
//
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}