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
//		int A, B, C;
//		cin >> A >> B >> C;
//
//		int numBlock = A*B*C;
//		
//		numBlock -= 8; // 각 꼭지점
//
//		// 각 모서리
//		if (A > 2 && B > 2)
//			numBlock -= (A - 2)*(B - 2) * 2;
//		if (B > 2 && C > 2)
//			numBlock -= (B - 2)*(C - 2) * 2;
//		if (A > 2 && C > 2)
//			numBlock -= (A - 2)*(C - 2) * 2;
//
//		// 내부
//		if (A > 2 && B > 2 && C > 2)
//			numBlock -= (A - 2)*(B - 2)*(C - 2);
//
//		cout << numBlock << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}