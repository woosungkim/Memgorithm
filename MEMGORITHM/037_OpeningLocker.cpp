/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for (int itr = 0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr + 1) << endl;

		/*

		�˰����� ���� �κ�

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

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}