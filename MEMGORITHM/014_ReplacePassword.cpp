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
		char replace[26 + 1] = "LBCDAGFHIJKTSNEPRQWVUOMXYZ";

		char password[101];
		cin >> password;

		for (int i = 0; password[i] != '\0'; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (password[i] == replace[j])
					printf( "%c",'A'+j);
			}
		}
		cout << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}