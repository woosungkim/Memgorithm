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
//		int station[4][2];
//		for (int i = 0; i < 4; i++)
//		{
//			cin >> station[i][0] >> station[i][1];
//		}
//	
//
//		int MAX = 0;
//		int nMan = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			nMan -= station[i][0];
//			nMan += station[i][1];
//
//			MAX = nMan>MAX ? nMan : MAX;
//		}
//
//		cout << MAX << endl;
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}