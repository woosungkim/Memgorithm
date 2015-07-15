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
//		int N, C;
//		cin>> N>> C;
//
//		int n[50001];
//		for ( int i=0; i<N; i++ )
//			cin>> n[i];
//
//		for ( int i=0; i<N-1; i++ )
//		{
//			for ( int j=1; j<N-i; j++ )
//			{
//				if ( C )
//				{
//					if ( n[j-1] < n[j] )
//					{
//						int tmp = n[j-1];
//						n[j-1] = n[j];
//						n[j] = tmp;
//					}
//				}
//				else
//				{
//					if ( n[j-1] > n[j] )
//					{
//						int tmp = n[j-1];
//						n[j-1] = n[j];
//						n[j] = tmp;
//					}
//				}
//					
//			}
//		}
//
//
//		for ( int i=0; i<N; i++ )
//			cout<< n[i]<< endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}