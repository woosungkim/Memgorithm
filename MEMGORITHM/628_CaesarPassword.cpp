///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int n;
//		cin >> n;
//
//		char text[51];
//		cin >> text;
//
//		for (int i = 0; text[i]!='\0'; i++)
//		{
//			if (text[i] + n <= 'Z')
//				text[i] += n;
//			else
//				text[i] = text[i] + n - 26;
//			cout << text[i];
//		}
//		cout << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}