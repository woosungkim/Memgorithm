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
//		int n[4];
//		cin>> n[0]>> n[1]>> n[2]>> n[3];
//
//		int p;
//		int MAX = n[0];
//
//		for ( int i=1; i<4; i++ )
//		{
//			if ( MAX < n[i] )
//			{
//				MAX=n[i];
//				p = i+1;
//			}
//		}
//
//		cout<< MAX<< endl<< p<< endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}