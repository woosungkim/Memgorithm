/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;

char decodeLetter(char letter[], int s)
{
	char code[8][7] = { "000000", "001111", "010011", "011100",
		"100110", "101001", "110101", "111010" };

	int nCode = 8;
	for (int i = 0; i < 8; i++)
	{
		int diff = 0;
		for (int j = 0; j < 6; j++)
		{
			if (letter[s + j] != code[i][j])
				diff++;
		}
		if (diff <= 1)
		{
			nCode = i;
			break;
		}
	}
	
	switch (nCode)
	{
	case 0:	return 'A';
	case 1: return 'B';
	case 2: return 'C';
	case 3: return 'D';
	case 4: return 'E';
	case 5: return 'F';
	case 6: return 'G';
	case 7: return 'H';
	case 8: return '3';
	}

	
}

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
		int nSecret;
		cin >> nSecret;

		char letter[61];
		cin >> letter;

		char plain[11];
		bool isError = false;
		int nError;
		for (int i = 0; i < nSecret*6; i+=6)
		{
			plain[i / 6] = decodeLetter(letter, i);

			if (plain[i / 6] == '3')
			{
				isError = true;
				nError = (i / 6) + 1;
				break;
			}
		}
		if (isError)
			cout << nError << endl;
		else
		{
			for (int i = 0; i < nSecret; i++)
				cout << plain[i];
			cout << endl;
		}

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}