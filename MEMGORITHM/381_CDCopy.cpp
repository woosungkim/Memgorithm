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
//		int minTime = n;
//
//		while (minTime--)
//		{
//			if ((minTime + (minTime / 3) + (minTime / 4)) == n)
//				break;
//			else if ((minTime + (minTime / 3) + (minTime / 4)) < n)
//			{		
//				minTime++;
//				break;
//			}
//		}
//
//		cout << minTime << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}