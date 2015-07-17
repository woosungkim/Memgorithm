///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int n;
//void yamiyami(char result[], int nWin, int nLose)
//{
//	char r[21];
//	strcpy_s(r, result);
//
//	// 완료조건
//	if (nWin == n)
//	{
//		cout << r << endl;
//		return;
//	}
//	// proc
//	r[strlen(result)] = 'o';
//	r[strlen(result)+1] = '\0';
//	
//	yamiyami(r, (++nWin)--, nLose);
//
//	r[strlen(result)] = 'x';
//	r[strlen(result) + 1] = '\0';
//
//	if ( ++nLose < n )
//		yamiyami(r, nWin, nLose);
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
//		// input
//		cin >> n;
//
//		// process
//		char result[21];
//		for (int i = 0; i < 21; i++)
//			result[i] = '\0';
//
//		yamiyami(result, 0, 0);
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}