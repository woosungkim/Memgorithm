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

		int n;
		cin >> n;

		int num[41];
		for (int i = 0; i < n; i++)
			cin >> num[i];

		int cNum;
		cin >> cNum;

		int sumAli = 0, sumMul = 0;

		for (int i = 0; i < n; i++)
		{
			if (num[i] <= cNum)
				if (cNum % num[i] == 0)
					sumAli += num[i];

			if (num[i] >= cNum)
				if (num[i] % cNum == 0)
					sumMul += num[i];
		}
		
		cout << sumAli << endl << sumMul << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}