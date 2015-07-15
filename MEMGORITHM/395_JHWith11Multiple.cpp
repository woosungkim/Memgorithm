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
//		char num[301];
//		cin >> num;
//
//		// 자리수 합 계산
//		int oddSum = 0, evenSum = 0;
//		for (int i = 0; num[i]!='\0'; i++)
//		{
//			if (i % 2 == 0)	evenSum += (num[i] - '0');
//			else oddSum += (num[i]-'0');
//			
//		}
//
//		// 차 계산
//		int diff = 0;
//		evenSum > oddSum ? diff = evenSum - oddSum : diff = oddSum - evenSum;
//
//		// 출력
//		diff % 11 == 0 ? cout << "yes" << endl : cout << "no" << endl;		
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}