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
//		int width, height;
//		cin >> width >> height;
//
//		int nMarket;
//		cin >> nMarket;
//
//		// setting markets for 1-dimension coordinate
//		int market[102];
//		int X;
//		for (int i = 1; i <= nMarket+1; i++)
//		{
//			int direction, distance;
//			cin >> direction >> distance;
//
//			if (direction == 1) // ��
//				market[i] = distance;
//			else if (direction == 2) // ��
//				market[i] = width + height + (width - distance);
//			else if (direction == 3) // ��
//				market[i] = width + height + width + (height - distance);
//			else if (direction == 4) // ��
//				market[i] = width + distance;
//		}
//		X = market[nMarket + 1];
//
//		// calculate min distance between markets and X
//		int sum = 0;
//		int loop = 2 * width + 2 * height;
//		for (int i = 1; i <= nMarket; i++)
//		{
//			if (market[i] < X)
//				sum += ((X - market[i]) < (market[i] + loop - X) ? (X - market[i]) : (market[i] + loop - X));
//			else // market[i] > X
//				sum += ((market[i] - X) < (X + loop - market[i]) ? (market[i] - X) : (X + loop - market[i]));
//		}
//		
//		// print
//		cout << sum << endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}