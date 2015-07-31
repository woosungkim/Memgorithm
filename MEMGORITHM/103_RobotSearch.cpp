///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int findNRoute(int row, int col)
//{
//	if (row == 0 && col == 0)
//		return 1;
//
//	int nRoute[16][16] = { 0 };
//	for (int i = 1; i <= row; i++)
//		nRoute[i][1] = 1;
//	for (int i = 1; i <= col; i++)
//		nRoute[1][i] = 1;
//
//	for (int i = 2; i <= row; i++)
//		for (int j = 2; j <= col; j++)
//			nRoute[i][j] = nRoute[i - 1][j] + nRoute[i][j - 1];
//
//	return nRoute[row][col];
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
//
//		int N, M, K;
//		cin >> N >> M >> K;
//
//		int midx, midy;
//		midx = K == 0? 0: (K%M == 0? K/M: (K / M)+1);
//		midy = K == 0? 0: (K % M==0? K%M+M: K%M);
//
//		int befoMid = findNRoute(midx, midy);
//
//		int afterMid = midx==0? findNRoute(N-midx, M-midy):findNRoute(N-midx+1, M-midy+1);
//
//		cout << befoMid * afterMid << endl;
//
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}