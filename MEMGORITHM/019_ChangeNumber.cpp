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
//		int A, B;
//		cin>> A>> B;
//
//		int p = 1;
//		
//		int cnt = 0;
//		int a = A;
//		int b = B;
//		for ( int i=0; i<32; i++ )
//		{	
//			a = A&p;
//			b = B&p;
//			if ( a != b )
//				cnt++;
//
//			p<<=1;
//		}
//		cout<< cnt<< endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}