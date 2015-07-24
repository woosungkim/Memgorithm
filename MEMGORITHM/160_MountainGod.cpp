///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//int MAX2(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//int MAX3(int a, int b, int c)
//{
//	return MAX2(MAX2(a, b), c);
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
//
//		int n;
//		cin >> n;
//
//		int num[101];
//		for (int i = 0; i < n; i++)
//			cin >> num[i];
//
//		int no[101], fst[101], tnd[101];
//		no[0] = 0, fst[0] = num[0], tnd[0] = 0;
//
//		for (int i = 1; i < n; i++)
//		{
//			no[i] = MAX3(no[i - 1], fst[i - 1], tnd[i - 1]);
//			fst[i] = no[i - 1] + num[i];
//			tnd[i] = fst[i - 1] + num[i];
//		}
//
//		cout << MAX3( no[n - 1], fst[n - 1], tnd[n - 1] ) << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}