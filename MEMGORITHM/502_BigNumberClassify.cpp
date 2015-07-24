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
//		char num[101];
//		cin >> num;
//
//		int dotCnt;
//		int len = strlen(num);
//		if (len % 3 == 0) dotCnt = 0;
//		else if (len % 3 == 1) dotCnt = 2;
//		else dotCnt = 1;
//		
//		for (int i = 0; num[i] != '\0'; i++)
//		{
//			cout << num[i];
//			if (i == len - 1) break;
//			if (++dotCnt == 3)
//			{
//				cout << ',';
//				dotCnt = 0;
//			}
//		}
//		cout << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}