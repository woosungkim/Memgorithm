///*
//
//vcpp, gpp에서 사용
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
//	int ncount;		/* 문제의 테스트 케이스 */
//
//	cin >> ncount;	/* 테스트 케이스 입력 */
//
//	for(int itr=0; itr<ncount; itr++)
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
//		int D, K;
//		cin>> D>> K;
//
//		int result = 0;
//		bool flag = false;
//		for ( int A=1; ; A++ )
//		{
//			for ( int B=1; ; B++ )
//			{
//				int a=A, b=B;
//				for ( int i=2; i<D; i++ )
//				{
//					result = a+b;
//					a = b;
//					b = result;
//				}
//				
//				// 정답일 떄 출력하고 끝~~
//				if ( result == K )
//				{
//					flag = true;
//					cout << A<< endl<< B<< endl;
//				}
//				else if ( result > K )
//					break;
//			}
//			if ( flag )
//				break;
//		}
//		
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}