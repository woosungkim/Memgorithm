///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int P;
//
//		int coin[150001];
//
//		cin >> P;
//		for (int i = 0; i < P; i++)
//			cin >> coin[i];
//
//		/* process */
//		int sum = 0;
//		bool wantGet = true;
//		for (int i = 0; i < P-1; i++)
//		{
//			if (wantGet)
//			{
//				if (coin[i] >= coin[i + 1])
//				{
//					sum += coin[i];
//					wantGet = false;
//				}
//			}
//			else
//			{
//				if (coin[i] <= coin[i + 1])
//				{
//					sum -= coin[i];
//					wantGet = true;
//				}
//			}
//		}
//		if (wantGet) 
//			sum += coin[P - 1];
//	
//		cout << sum << endl;
//
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}