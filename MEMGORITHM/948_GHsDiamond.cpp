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
//		n--;
//		int mid = (2 * n) / 2;
//		for (int i = 0; i < 2 * n + 1; i++)
//		{
//			for (int j = 0; j < 2 * n + 1; j++)
//			{
//				if (i <= mid)
//				{
//					if (j >= mid - i && j <= mid + i) cout << "*";
//					else cout << " ";
//				}
//				else
//				{
//					if (j >= (i-mid) && j <= 3*mid-i) cout << "*";
//					else cout << " ";
//				}
//				
//			}	
//			cout << endl;
//		}
//		
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}