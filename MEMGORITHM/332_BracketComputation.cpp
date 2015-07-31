/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;

char mStack[35];
int top = -1;

void push(char b)
{
	mStack[++top] = b;
}
char pop()
{
	return mStack[top--];
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
		top = -1; // stack init

		char str[35];
		cin >> str;

		int multi = 1;
		int sum = 0;
		bool isError = false;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == '(')
			{
				push('(');
				multi *= 2;
			}
			else if (str[i] == '[')
			{
				push('[');
				multi *= 3;
			}
			else if (str[i] == ')')
			{
				if (top == -1)
				{
					isError = true;
					break;
				}
				

				if (str[i - 1] == ')' || str[i - 1] == ']')
				{
					pop();
					multi /= 2;
				}
				else
				{
					char topBracket = pop();
					if (topBracket == '(')
					{
						sum += multi;
						multi /= 2;
					}
					else if (topBracket == '[')
					{
						isError = true;
						break;
					}
				}

			}
			else if (str[i] = ']')
			{
				if (top == -1)
				{
					isError = true;
					break;
				}


				if (str[i - 1] == ')' || str[i - 1] == ']')
				{
					pop();
					multi /= 3;
				}
				else
				{
					char topBracket = pop();
					if (topBracket == '[')
					{
						sum += multi;
						multi /= 3;
					}
					else if (topBracket == '(')
					{
						isError = true;
						break;
					}
				}
			}
		}

		if (isError || top != -1)
			cout << "0" << endl;
		else
			cout << sum << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}