///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
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
//		int P;
//
//		int coin[150001];
//
//		cin >> P;
//		for (int i = 0; i < P; i++)
//			cin >> coin[i];
//
//		/* process */
//		int sum = 0;
//		bool wantGet = true;
//		for (int i = 0; i < P-1; i++)
//		{
//			if (wantGet)
//			{
//				if (coin[i] >= coin[i + 1])
//				{
//					sum += coin[i];
//					wantGet = false;
//				}
//			}
//			else
//			{
//				if (coin[i] <= coin[i + 1])
//				{
//					sum -= coin[i];
//					wantGet = true;
//				}
//			}
//		}
//		if (wantGet) 
//			sum += coin[P - 1];
//	
//		cout << sum << endl;
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}