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
//
//		int mk[10], sy[10];
//		for (int i = 0; i < 10; i++)
//			cin >> mk[i];
//		for (int i = 0; i < 10; i++)
//			cin >> sy[i];
//
//		int mkWin = 0;
//		int syWin = 0;
//
//		for (int i = 0; i < 10; i++)
//		{
//			if (mk[i] > sy[i])
//				mkWin++;
//			else if (mk[i] < sy[i])
//				syWin++;
//		}
//
//		if (mkWin > syWin)
//			cout << "�α�" << endl;
//		else if (mkWin < syWin)
//			cout << "����" << endl;
//		else
//			cout << "D" << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}