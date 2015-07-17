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
//		int n;
//		cin >> n;
//		n--;
//		int mid = (2 * n) / 2;
//		for (int i = 0; i < 2 * n + 1; i++)
//		{
//			for (int j = 0; j < 2 * n + 1; j++)
//			{
//				if (i <= mid)
//				{
//					if (j >= mid - i && j <= mid + i) cout << "*";
//					else cout << " ";
//				}
//				else
//				{
//					if (j >= (i-mid) && j <= 3*mid-i) cout << "*";
//					else cout << " ";
//				}
//				
//			}	
//			cout << endl;
//		}
//		
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}