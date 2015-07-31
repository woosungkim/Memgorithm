/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		/*

		알고리즘이 들어가는 부분

		*/

		int N;
		cin>> N;
		if ( N > 3 )
		{
			for ( int i=2; i*i<N; i++ )
			{
				if ( N % i == 0 )
				{
					cout<< "No"<< endl;
					break;
				}
				
				if ( i == N/2 )
					cout<< "Yes"<< endl;
			}
		}
		else
		{
			cout<< "Yes"<< endl;
		}
		

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}