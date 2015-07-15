///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for(int itr=0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr+1) << endl;
//
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//
//		int n;
//		cin>> n;
//
//		int two = 1024;
//		while ( two > n )
//			two /= 2;
//
//		while ( two )
//		{
//			if ( n >= two )
//			{
//				cout<< "1";
//				n-=two;
//			}
//			else
//				cout<< "0";
//
//			
//			two/=2;		
//		}
//		cout<< endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}