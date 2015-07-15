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
//		int k;
//		cin>> k;
//
//		int len = 0;
//		int two = 2;
//		int sum = 0;
//
//		while ( sum < k ) // 문자 길이 구하기
//		{
//			sum += two;
//			two *= 2;
//			len++;
//		}
//
//		char luckyNum[101];
//		for ( int i=0; i<100; i++ )
//			luckyNum[i] = '0';
//
//		for ( int i=0; i<k; i++ )
//		{
//			int j=0;
//			while ( 1 )
//			{
//				if ( luckyNum[j] == '0' ) 
//				{
//					luckyNum[j] = '4';
//					break;
//				}
//				else if ( luckyNum[j] == '4' )
//				{
//					luckyNum[j] = '7';
//					break;
//				}
//				else if ( luckyNum[j] == '7' )
//				{
//					luckyNum[j] = '4';
//					j++;
//				}
//			}
//
//		}
//		
//		for ( int i=len-1; i>=0; i-- )
//			cout<< luckyNum[i];
//		cout<< endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}