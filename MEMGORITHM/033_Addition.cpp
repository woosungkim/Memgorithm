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
//		int mask = 1;
//		int carry = 0;
//		int result = 0;
//		for (int i = 0; i < 31; i++)
//		{
//			int cnt = 0;
//			if ((A&(mask << i)) && (B&(mask << i)) && carry ) // 1, 1, 1
//			{
//				result |= mask<<i;
//				carry = 1;
//			}
//			else if (((A&(mask << i)) && (B&(mask << i))) || // 1, 1, 0
//				((B&(mask << i)) && carry) ||
//				((A&(mask << i)) && carry) )
//			{
//				carry = 1;
//			}
//			else if ((A&(mask << i)) || (B&(mask << i)) || carry) // 1, 0, 0
//			{
//				result |= mask << i;
//				carry = 0;
//			}
//		}
//		cout << result << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}