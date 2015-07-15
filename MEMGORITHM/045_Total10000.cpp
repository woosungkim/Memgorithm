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
//		int a[50001], b[50001];
//		int n1, n2;
//
//		cin >> n1;
//		for (int i = 0; i < n1; i++)
//			cin >> a[i];
//
//		cin >> n2;
//		for (int i = 0; i < n2; i++)
//			cin >> b[i];
//
//		bool isExist = false;
//		for (int i = 0; i < n1; i++)
//		{
//			for (int j = 0; j < n2; j++)
//			{
//				if (a[i] + b[j] == 10000)
//					isExist = true;
//			}
//		}
//
//		if (isExist)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}