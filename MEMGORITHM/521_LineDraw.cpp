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
//		int L[20] = { 0 };
//		L[0] = 1;
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 0; j < i; j++)
//				L[i] += (L[j] * L[(i - 1) - j]);
//
//		cout << L[n] << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}