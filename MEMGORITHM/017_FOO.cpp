///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int mystrlen(char str[])
//{
//	int len = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		len++;
//
//	return len;
//}
//int main()
//{
//
//	int nCount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		�˰����� ���� �κ�
//
//		*/
//		char str[256 + 1];
//		cin >> str;
//
//		int len = mystrlen(str);
//
//		for (int i = 0; i < len-2; i++)
//		{
//			if (str[i] == 'F' && str[i + 1] == 'O' && str[i + 2] == 'O')
//				str[i] = 'O', str[i + 2] = 'F',i++;
//		}
//		cout << str << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}