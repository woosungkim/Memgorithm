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
//		int num[1001];
//		int cnt1=0, cnt2=0, cnt3=0;
//		int p[4];// �� ������ ���� ������
//
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[i];
//			if (num[i] == 1) cnt1++;
//			else if (num[i] == 2) cnt2++;
//			else if (num[i] == 3) cnt3++;
//		}
//		p[1] = 0;
//		p[2] = cnt1;
//		p[3] = p[2] + cnt2;
//
//		int numChange = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (i < p[2])
//			{
//				if (num[i] == 2)
//				{
//					for (int j = p[2]; j < N; j++)
//					{
//						if (num[j] == 1)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				else if (num[i] == 3)
//				{
//					for (int j = p[3]; j < N; j++)
//					{
//						if (num[j] == 1)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//			else if (i < p[3])
//			{
//				if (num[i] == 1)
//				{
//					for (int j = p[1]; j < N; j++)
//					{
//						if (num[j] == 2)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				if (num[i] == 3)
//				{
//					for (int j = p[3]; j < N; j++)
//					{
//						if (num[j] == 2)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//			else
//			{
//				if (num[i] == 1)
//				{
//					for (int j = p[1]; j < N; j++)
//					{
//						if (num[j] == 3)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//				if (num[i] == 2)
//				{
//					for (int j = p[2]; j < N; j++)
//					{
//						if (num[j] == 3)
//						{
//							int tmp = num[i];
//							num[i] = num[j];
//							num[j] = tmp;
//
//							numChange++;
//							break;
//						}
//					}
//				}
//			}
//				
//		}
//
//		//for (int i = 0; i < N; i++)
//		//	cout << num[i] << " ";
//		//cout << endl;
//
//		cout << numChange << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}