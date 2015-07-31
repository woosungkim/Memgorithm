/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;

int valStack[10001];
int minStack[10001];
int top = -1;

bool isEmpty()
{
	if (top == -1)
		return true;
	return false;
}

void push(int n)
{
	
	if (isEmpty())
	{
		valStack[++top] = n;
		minStack[top] = n;
	}
	else
	{
		valStack[++top] = n;
		if (minStack[top - 1] < n)
			minStack[top] = minStack[top - 1];
		else
			minStack[top] = n;
	}
}

int pop()
{
	if (isEmpty())
		return -1;
	return valStack[top--];
}

int min()
{
	if (isEmpty())
		return -1;
	return minStack[top];
}


int mystrlen(char str[])
{
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++)
		cnt++;
	return cnt;
}

bool mystrcmp(char str1[], char str2[])
{
	for (int i = 0; i < mystrlen(str1); i++)
		if (str1[i] != str2[i])
			return false;
	return true;
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
		top = -1; // initStack

		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			char cmd[10];
			cin >> cmd;

			if (mystrcmp(cmd, "Push"))
			{
				int num;
				cin >> num;

				push(num);
			}
			else if (mystrcmp(cmd, "Pop"))
			{
				if (isEmpty())
					cout << "Empty" << endl;
				else
					cout << "Pop " << pop() << endl;
			}
			else if (mystrcmp(cmd, "Min"))
			{
				if (isEmpty())
					cout << "Empty" << endl;
				else
					cout << "Min " << min() << endl;
			}
		}

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}