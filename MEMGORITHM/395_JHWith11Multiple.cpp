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
//		char num[301];
//		cin >> num;
//
//		// �ڸ��� �� ���
//		int oddSum = 0, evenSum = 0;
//		for (int i = 0; num[i]!='\0'; i++)
//		{
//			if (i % 2 == 0)	evenSum += (num[i] - '0');
//			else oddSum += (num[i]-'0');
//			
//		}
//
//		// �� ���
//		int diff = 0;
//		evenSum > oddSum ? diff = evenSum - oddSum : diff = oddSum - evenSum;
//
//		// ���
//		diff % 11 == 0 ? cout << "yes" << endl : cout << "no" << endl;		
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}