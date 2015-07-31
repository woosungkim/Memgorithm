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
		int N, K;
		cin >> N >> K;
		
		bool locker[101];
		for (int i = 1; i <= 100; i++)
			locker[i] = true;

		for (int i = 2; i <= N; i++)
		{
			int mul = i;
			while (mul < 100)
			{
				if (locker[mul])
					locker[mul] = false;
				else
					locker[mul] = true;
				mul+=i;
			}
		}
		
		if (locker[K])
			cout << "1" << endl;
		else
			cout << "0" << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}