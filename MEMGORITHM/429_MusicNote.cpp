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
//		int N, Q;
//		cin >> N >> Q;
//
//		int B[10001];
//		int T;
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> B[i];
//		}
//		
//		for (int i = 0; i < Q; i++)
//		{
//			cin >> T;
//
//			int numNote = 1;
//			for (int j = 0; j < N; j++)
//			{
//				if (T - B[j] >= 0)
//				{
//					T -= B[j];
//					numNote++;
//				}
//				else
//					break;
//			}
//			cout << numNote << endl;
//
//		}
//
//
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}