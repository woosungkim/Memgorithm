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
//		int N;
//		cin >> N;
//
//		double num[10001];
//		int boonja[10001];
//		int boonmo[10001];
//
//		// 할당
//		int total = 0;
//		for (int i = 2; i <= N; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				boonja[total] = j;
//				boonmo[total] = i;
//				num[total++] = (double)j / (double)i;
//			}
//		}
//
//		// 정렬
//		for (int i = 1; i<total; i++)
//		{
//			for (int j = i; j>0; j--)
//			{
//				if (num[j] < num[j - 1])
//				{
//					double tmp = num[j - 1];
//					num[j - 1] = num[j];
//					num[j] = tmp;
//
//					tmp = boonja[j - 1];
//					boonja[j - 1] = boonja[j];
//					boonja[j] = tmp;
//
//					tmp = boonmo[j - 1];
//					boonmo[j - 1] = boonmo[j];
//					boonmo[j] = tmp;
//				}
//			}
//		}
//
//		// 출력
//		cout << "0/1" << endl;
//		cout << boonja[0] << "/" << boonmo[0] << endl;
//		for (int i = 1; i < total; i++)
//		{
//			if (num[i - 1] != num[i])
//			{
//				cout << boonja[i] << "/" << boonmo[i] << endl;
//			}
//		}
//		cout << "1/1" << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}