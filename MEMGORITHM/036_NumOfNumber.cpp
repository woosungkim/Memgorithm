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
//		int A, B, C;
//		cin>> A>> B>> C;
//
//		int M = A*B*C;
//		int result[10];
//		for ( int i=0; i<10; i++ )// input
//			result[i] = 0;
//
//		while ( M>9 ) // process
//		{
//			result[M%10]++;
//			M/=10;
//		}
//		result[M]++;
//
//		for ( int i=0; i<10; i++ ) // print
//			cout<< result[i]<< endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}