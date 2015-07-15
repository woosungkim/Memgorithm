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
//		int N;
//		cin>> N;
//
//		int n[101];
//		for ( int i=0; i<N; i++ )
//			cin>> n[i];
//
//		
//		for ( int i=1; i<N; i++ )
//		{
//			for ( int j=i; j>0; j-- )
//			{
//				if ( n[j] < n[j-1] )
//				{
//					int tmp = n[j-1];
//					n[j-1] = n[j];
//					n[j] = tmp;
//				}
//			}
//		}
//
//		for ( int i=0; i<N; i++ )
//			cout<< n[i]<< " ";
//		cout<< endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}