///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int gem[31];
//int n;
//int sumAll;
//
//int cnt = 0;
//
//void findSumHalf( int sum, int pStart )
//{
//	if (sum == sumAll / 2)
//	{
//		cnt++;
//		return;
//	}
//	if (pStart >= n)
//		return;
//
//	findSumHalf(sum, pStart + 1);
//	sum += gem[pStart];
//	findSumHalf(sum, pStart + 1);
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
//		cnt = 0;
//		sumAll = 0;
//
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> gem[i];
//			sumAll += gem[i];
//		}
//
//		if (sumAll % 2 == 1)
//			cout << "impossible" << endl;
//		else
//		{
//			findSumHalf(0, 0);
//
//			if (!cnt)
//				cout << "impossible" << endl;
//			else
//				cout << cnt << endl;
//		}
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}