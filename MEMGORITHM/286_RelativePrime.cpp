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
//		int a, b;
//		cin>> a>> b;
//
//		if ( a > b )
//			a^=b, b^=a, a^=b;
//
//		bool flag = true;
//		for ( int i=2; i<=a; i++ )
//		{
//			if ( (a%i == 0) && (b%i == 0) )
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		flag ? cout<<"yes"<<endl : cout<<"no"<<endl; 
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}