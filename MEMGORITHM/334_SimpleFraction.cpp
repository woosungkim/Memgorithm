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
//		int N;
//		cin >> N;
//
//		double num[10001];
//		int boonja[10001];
//		int boonmo[10001];
//
//		// �Ҵ�
//		int total = 0;
//		for (int i = 2; i <= N; i++)
//		{
//			for (int j = 1; j < i; j++)
//			{
//				boonja[total] = j;
//				boonmo[total] = i;
//				num[total++] = (double)j / (double)i;
//			}
//		}
//
//		// ����
//		for (int i = 1; i<total; i++)
//		{
//			for (int j = i; j>0; j--)
//			{
//				if (num[j] < num[j - 1])
//				{
//					double tmp = num[j - 1];
//					num[j - 1] = num[j];
//					num[j] = tmp;
//
//					tmp = boonja[j - 1];
//					boonja[j - 1] = boonja[j];
//					boonja[j] = tmp;
//
//					tmp = boonmo[j - 1];
//					boonmo[j - 1] = boonmo[j];
//					boonmo[j] = tmp;
//				}
//			}
//		}
//
//		// ���
//		cout << "0/1" << endl;
//		cout << boonja[0] << "/" << boonmo[0] << endl;
//		for (int i = 1; i < total; i++)
//		{
//			if (num[i - 1] != num[i])
//			{
//				cout << boonja[i] << "/" << boonmo[i] << endl;
//			}
//		}
//		cout << "1/1" << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}