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
//		int N, Q;
//		cin >> N >> Q;
//
//		int B[10001];
//		int T;
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> B[i];
//		}
//		
//		for (int i = 0; i < Q; i++)
//		{
//			cin >> T;
//
//			int numNote = 1;
//			for (int j = 0; j < N; j++)
//			{
//				if (T - B[j] >= 0)
//				{
//					T -= B[j];
//					numNote++;
//				}
//				else
//					break;
//			}
//			cout << numNote << endl;
//
//		}
//
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}