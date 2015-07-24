///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//long long hi[80001];
//long long nAvailSee[80001] = { 0 };
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
//
//		int n;
//		cin >> n;
//		
//		for (int i = 0; i < n; i++)
//			nAvailSee[i] = 0;
//
//		for (int i = 0; i < n; i++)
//			cin >> hi[i];
//
//		int idxMAX = n - 1;
//		int idxMAX2 = 0;
//		int cntAvailSee = 0;
//		for (int i = n - 2; i >= 0; i--)
//		{
//
//			if (hi[i] >= hi[i + 1])
//			{
//				if (hi[i] >= hi[idxMAX])
//				{
//					
//					if (!(hi[i] == hi[idxMAX]))
//					{
//						nAvailSee[i] = nAvailSee[idxMAX] + (idxMAX - i);
//						idxMAX = i;
//					}
//					else
//					{
//						if ( i != idxMAX && idxMAX != i+1)
//							nAvailSee[i] = (idxMAX - i-1);
//					}
//
//					if ( i - 1 >= 0 )
//						idxMAX2 = i - 1;
//				}
//				else if (hi[i] > hi[idxMAX2])
//				{
//					nAvailSee[i] = idxMAX - i - 1;
//					idxMAX2 = i;
//				}
//				else
//				{
//					if (hi[i] == hi[i + 1])
//						cntAvailSee = 0;
//					else
//						nAvailSee[i] = ++cntAvailSee;
//				}
//			}
//			else
//			{
//				cntAvailSee = 0;
//			}
//
//			cout << idxMAX << "  " << idxMAX2 << " " << endl;;
//		}
//
//		for (int i = 0; i < n; i++)
//			cout<< nAvailSee[i] << endl;
//
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//			sum += nAvailSee[i];
//
//		cout << sum << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}