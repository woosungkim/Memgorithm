///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int bbangya(int n)
//{
//	if (n == 1) return 0;
//	else if (n == 2) return 1;
//	
//	return (n - 1)* (bbangya(n - 2) + bbangya(n - 1));
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
//		int n;
//		cin >> n;
//
//		cout<< bbangya(n)<< endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}