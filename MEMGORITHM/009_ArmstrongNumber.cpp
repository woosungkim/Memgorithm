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
//		for ( int i=100; i<1000; i++ )
//		{
//			int h, t, o;
//			h = i/100;
//			t = (i-(100*h))/10;
//			o = (i-((100*h)+(10*t)));
//
//			if ( i == ((h*h*h)+(t*t*t)+(o*o*o)) )
//			{
//				cout<< i<< endl;
//			}
//
//		}
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}