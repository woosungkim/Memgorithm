///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int n;
//void yamiyami(char result[], int nWin, int nLose)
//{
//	char r[21];
//	strcpy_s(r, result);
//
//	// �Ϸ�����
//	if (nWin == n)
//	{
//		cout << r << endl;
//		return;
//	}
//	// proc
//	r[strlen(result)] = 'o';
//	r[strlen(result)+1] = '\0';
//	
//	yamiyami(r, (++nWin)--, nLose);
//
//	r[strlen(result)] = 'x';
//	r[strlen(result) + 1] = '\0';
//
//	if ( ++nLose < n )
//		yamiyami(r, nWin, nLose);
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
//		// input
//		cin >> n;
//
//		// process
//		char result[21];
//		for (int i = 0; i < 21; i++)
//			result[i] = '\0';
//
//		yamiyami(result, 0, 0);
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}