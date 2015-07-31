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
//		int M, S, C;
//		int cage[201];
//		int diff[201];
//		
//		cin >> M >> S >> C;
//
//		for (int i = 0; i < C; i++)
//			cin >> cage[i];
//
//		// cage sort
//		for (int i = 1; i < C; i++)
//		{
//			for (int j = i; j > 0; j--)
//			{
//				if (cage[j] < cage[j - 1])
//				{
//					int tmp = cage[j];
//					cage[j] = cage[j - 1];
//					cage[j - 1] = tmp;
//				}
//			}
//		}
//
//		// compute diff between all cages
//		for (int i = 1; i < C; i++)
//			diff[i - 1] = cage[i] - cage[i - 1] - 1;
//		for (int i = C-1; i < 201; i++)
//			diff[i] = 0;
//
//		// diff sort
//		for (int i = 1; i < C - 1; i++)
//		{
//			for (int j = i; j > 0; j--)
//			{
//				if (diff[j] > diff[j - 1])
//				{
//					int tmp = diff[j];
//					diff[j] = diff[j - 1];
//					diff[j - 1] = tmp;
//				}
//			}
//		}
//		
//		// compute answer
//		int maxSize = cage[C - 1] - cage[0]+1;
//
//		for (int i = 0; i < M - 1; i++)
//			maxSize -= diff[i];
//		
//		cout << maxSize << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}