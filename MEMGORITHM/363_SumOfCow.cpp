///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//long long hi[80001];
//long long nAvailSee[80001] = { 0 };
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
//
//		int N;
//		cin >> N;
//
//		for (int i = 1; i <= N; i++)
//		{
//			cin >> hi[i];
//			nAvailSee[i] = 0;
//		}
//
//		for (int i = N-1 ; i > 0; i--)
//		{
//			if (hi[i] > hi[i + 1])
//			{
//				int cnt = 0;
//				for (int j = i + 1; j <= N; j++)
//				{
//					if (hi[i] > hi[j])
//						cnt++;
//					else 
//						break;
//				}
//				nAvailSee[i] = cnt;
//			}
//			else
//				nAvailSee[i] = 0;
//		}
//			
//		int sum = 0;
//		for (int i = 1; i <= N; i++)
//			sum += nAvailSee[i];
//
//		cout << sum<< endl;
//		
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}