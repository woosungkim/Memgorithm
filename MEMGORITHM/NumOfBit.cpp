///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//char pattern[31];
//int n, k;
//
//void swap(char *a, char *b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void printPattern(int idx, int cnt1, int cnt0)
//{
//	// overflow
//	if (cnt0 > n - k)
//		return;
//	
//	//print
//	if (cnt1 == k)
//	{
//		for (int i = 0; i < cnt1 + cnt0; i++)
//			cout << pattern[i];
//		for (int i = cnt1 + cnt0; i < n; i++)
//			cout << '0';
//		cout << endl;
//
//		return;
//	}
//	
//	// recursive
//	pattern[idx] = '1';
//	printPattern(idx + 1, cnt1 + 1, cnt0);
//
//	pattern[idx] = '0';
//	printPattern(idx + 1, cnt1, cnt0 + 1);
//	
//}
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
//		cin >> n >> k;
//
//		printPattern(0, 0, 0);
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}