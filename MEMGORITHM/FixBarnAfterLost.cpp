///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//int MIN = 999;
//int M, S, C;
//int cage[201];
//void findMinLength(int nChoice, int idxStart, int idxNow, int sum)
//{
//	//cout << nChoice << " " << idxStart << " " << idxNow << " " << sum << endl;
//	if (nChoice == M - 1 || idxNow == C - 1 )
//	{
//		if (sum + (cage[C - 1] - cage[idxStart] + 1) < MIN)
//			MIN = sum + (cage[C - 1] - cage[idxStart] + 1);
//		return;
//	}
//
//	// 선택 할 때
//	findMinLength(nChoice + 1, idxNow + 1, idxNow + 1, (sum + cage[idxNow] - cage[idxStart] + 1));
//	// 선택 안 할 때
//	findMinLength(nChoice, idxStart, idxNow + 1, sum);
//
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
//		MIN = 999;
//		
//		cin >> M >> S >> C;
//
//
//		for (int i = 0; i < C; i++)
//			cin >> cage[i];
//
//		findMinLength(0, 0, 0, 0);
//
//		cout << MIN << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}