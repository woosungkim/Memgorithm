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
//		char num[101];
//		cin >> num;
//
//		int dotCnt;
//		int len = strlen(num);
//		if (len % 3 == 0) dotCnt = 0;
//		else if (len % 3 == 1) dotCnt = 2;
//		else dotCnt = 1;
//		
//		for (int i = 0; num[i] != '\0'; i++)
//		{
//			cout << num[i];
//			if (i == len - 1) break;
//			if (++dotCnt == 3)
//			{
//				cout << ',';
//				dotCnt = 0;
//			}
//		}
//		cout << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}