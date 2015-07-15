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
//		int num[1001];
//		int cnt1=0, cnt2=0, cnt3=0;
//		int p[4];// 각 숫자의 시작 포인터
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[i];
//			if (num[i] == 1) cnt1++;
//			else if (num[i] == 2) cnt2++;
//			else if (num[i] == 3) cnt3++;
//		}
//		p[1] = 0;
//		p[2] = cnt1;
//		p[3] = p[2] + cnt2;
//
//		int numChange = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (i < p[2])
//			{
//				if (num[i] == 2)
//				{
//					for (int j = p[2]; j < N; j++)
//					{
//						if (num[j] == 1)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				else if (num[i] == 3)
//				{
//					for (int j = p[3]; j < N; j++)
//					{
//						if (num[j] == 1)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//			else if (i < p[3])
//			{
//				if (num[i] == 1)
//				{
//					for (int j = p[1]; j < N; j++)
//					{
//						if (num[j] == 2)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				if (num[i] == 3)
//				{
//					for (int j = p[3]; j < N; j++)
//					{
//						if (num[j] == 2)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//			else
//			{
//				if (num[i] == 1)
//				{
//					for (int j = p[1]; j < N; j++)
//					{
//						if (num[j] == 3)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				if (num[i] == 2)
//				{
//					for (int j = p[2]; j < N; j++)
//					{
//						if (num[j] == 3)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//				
//		}
//
//		//for (int i = 0; i < N; i++)
//		//	cout << num[i] << " ";
//		//cout << endl;
//
//		cout << numChange << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}