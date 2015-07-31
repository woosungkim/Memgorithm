/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for (int itr = 0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr + 1) << endl;

		/*

		알고리즘이 들어가는 부분

		*/
		
		for (int i = 1; i < 10001; i++)
		{
			int multi = i*i;
			if (i < 10)
				multi %= 10;
			else if (i < 100)
				multi %= 100;
			else if (i < 1000)
				multi %= 1000;
			else if (i < 10000)
				multi %= 10000;
			else
				multi %= 100000;

			if (multi == i)
				cout << i << endl;
		}

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}