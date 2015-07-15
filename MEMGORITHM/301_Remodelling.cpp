///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int N;
//		cin>> N;
//
//		long long totalTime = 0;
//		long long S[10001];
//
//		for ( int i=0; i<N; i++ )
//			cin>> S[i];
//		
//		int start = 0;
//	
//		while ( start <= N )
//		{
//			//정렬
//			for ( int i=start+1; i<N; i++ )
//			{
//				for ( int j=i; j>start; j-- )
//				{
//					if ( S[j] < S[j-1] )
//					{
//						int tmp = S[j-1];
//						S[j-1] = S[j];
//						S[j] = tmp;
//					}
//				}
//			}			
//		
//			S[start+1] = S[start]+S[start+1];
//			start++;
//
//			if ( start == N )
//				break;
//
//			totalTime += S[start];
//		
//		}
//
//		cout<< totalTime<< endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}