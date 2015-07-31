/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;


int n;
int wolfSize[6];

int maxSizeSum;

int nAllPerm = 0;
char strPerm[720+1][6+1];
int nCompare = 0;
char compare[20][2];
bool isPossible[720 + 1];


void swap(char* c1, char* c2)
{
	char* tmp = c1;
	c1 = c2;
	c2 = tmp;
}

void findAllPerm(char* str, int permStart)
{
	if (permStart == n)
	{
		for (int j = 0; j < n; j++)
			strPerm[nAllPerm][j] = str[j];
		nAllPerm++;
	}

	for (int i = permStart; i < n; i++)
	{
		swap(str[permStart], str[i]);
		findAllPerm(str, permStart + 1);
		swap(str[permStart], str[i]);
	}
}

void findCompare(char str[], int wolfSize[])
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (wolfSize[i] + wolfSize[j] > maxSizeSum)
			{
				compare[nCompare][0] = str[i];
				compare[nCompare++][1] = str[j];
			}
		}
	}
}

int mystrchr(char str[], char c)
{
	for (int i = 0; i < n; i++)
		if (str[i] == c)
			return i;
}

void checkPossiblePerm()
{
	for (int i = 0; i < nAllPerm; i++)
		if (isPossible[i])
			for (int j = 0; j < nCompare; j++)
				if (mystrchr(strPerm[i], compare[j][0]) > mystrchr(strPerm[i], compare[j][1]))
					isPossible[i] = false;
	
}

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
		
		nAllPerm = 0;
		nCompare = 0; // initialization

		cin >> n >> maxSizeSum;
		
		for (int i = 0; i < n; i++)
			cin >> wolfSize[i];
		
		char str[10] = "abcdef";

		findAllPerm(str,0);
		for (int i = 0; i < nAllPerm; i++)
			isPossible[i] = true;

		findCompare(str, wolfSize);

		checkPossiblePerm();
		
		int nPossiblePerm = 0;
		for (int i = 0; i < nAllPerm; i++)
			if (isPossible[i])
				nPossiblePerm++;

		cout << nPossiblePerm << endl;
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}