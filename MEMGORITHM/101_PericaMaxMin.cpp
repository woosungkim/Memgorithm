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
//		int A, B;
//		cin >> A >> B;
//
//		int sum = A + B;
//		int sumMAX = sum;
//		int sumMIN = sum;
//
//		int mask = 10;
//		int correctVal = 1;
//
//		while (A || B)
//		{
//			if (A)
//			{
//				if (A % mask == 5)
//					sumMAX += correctVal;
//				else if (A % mask == 6)
//					sumMIN -= correctVal;
//				A /= mask;
//			}
//			
//			if (B)
//			{
//				if (B % mask == 5)
//					sumMAX += correctVal;
//				else if (B % mask == 6)
//					sumMIN -= correctVal;
//				B /= mask;
//			}
//			
//			correctVal *= 10;
//		}
//
//		cout << sumMIN << " " << sumMAX << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}