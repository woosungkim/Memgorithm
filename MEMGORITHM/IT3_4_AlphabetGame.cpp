///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//char str[11];
//int len;
//char word[11];
//bool check[11];
//
//int mystrlen(char str[])
//{
//	int cnt = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		cnt++;
//
//	return cnt;
//}
//
//void swap(char* a, char* b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void perm(int idxStart)
//{
//	if (idxStart >= len)
//	{
//		for (int i = 0; i < len; i++)
//			cout << word[i];
//		cout << endl;
//		return;
//	}
//
//	char prev = '\0';
//	for (int i = 0; i < len; i++)
//	{
//		if (check[i] == false)
//		{
//			if (i > 0 && prev == str[i])
//				continue;
//			prev = str[i];
//			word[idxStart] = str[i];
//			check[i] = true;
//			perm(idxStart + 1);
//			check[i] = false;
//		}
//	}
//
//}
//
//int main()
//{
//
//	int nCount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for (int itr = 0; itr < nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		�˰����� ���� �κ�
//
//		*/
//		
//		cin >> str;
//		len = mystrlen(str);
//		
//		for (int i = 0; i < len; i++)
//			check[i] = false;
//		
//		for (int i = 1; i < len; i++)
//		{
//			for (int j = i; j > 0; j--)
//			{
//				if (str[j] < str[j - 1])
//				{
//					char tmp = str[j];
//					str[j] = str[j - 1];
//					str[j - 1] = tmp;
//				}
//			}
//		}
//
//		perm(0);
//		
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}