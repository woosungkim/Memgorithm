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
//		int a[50001], b[50001];
//		int n1, n2;
//
//		cin >> n1;
//		for (int i = 0; i < n1; i++)
//			cin >> a[i];
//
//		cin >> n2;
//		for (int i = 0; i < n2; i++)
//			cin >> b[i];
//
//		bool isExist = false;
//		for (int i = 0; i < n1; i++)
//		{
//			for (int j = 0; j < n2; j++)
//			{
//				if (a[i] + b[j] == 10000)
//					isExist = true;
//			}
//		}
//
//		if (isExist)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}