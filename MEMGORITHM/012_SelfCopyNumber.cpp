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

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}