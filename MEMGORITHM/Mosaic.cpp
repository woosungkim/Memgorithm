///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//
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
//		int row, col;
//		cin >> row >> col;
//
//		int nPaper, nWrong;
//		cin >> nPaper >> nWrong;
//
//		bool wrongCheck[1000001] = { false };
//		
//		int maxVerti = 0, maxHori = 0;
//		for (int i = 0; i < nWrong; i++)
//		{
//			int r, c;
//			cin >> r >> c;
//			if (maxVerti < r)
//				maxVerti = r;
//			if (maxHori < c)
//				maxHori = c;
//			wrongCheck[c] = true;
//		}
//
//		int minSize = maxVerti;
//		int maxSize = maxHori;
//
//		for (int i = minSize; i <= maxSize; i++)
//		{
//			int paperCnt = 0;
//			for (int j = 1; j <= maxHori; )
//			{
//				if (wrongCheck[j])
//				{
//					j += i;
//					paperCnt++;
//				}
//				else
//					j++;
//			}
//			if (paperCnt <= nPaper)
//			{
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}