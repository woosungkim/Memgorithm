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
//		int m;
//		cin>> m;
//
//		m = 1000-m;
//
//		int hund=0, fif=0, ten=0;
//
//		while ( m != 0 )
//		{
//			if ( m >= 100 )
//			{
//				m-=100;
//				hund++;
//			}
//			else if ( m >= 50 )
//			{
//				m-=50;
//				fif++;
//			}
//			else if ( m >= 10 )
//			{
//				m-=10;
//				ten++;
//			}
//		}
//
//		cout<< hund<< " "<< fif<< " "<< ten<< endl;
//
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}