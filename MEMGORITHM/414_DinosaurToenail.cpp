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
//		long long Q, P, x, y;
//
//		cin >> Q >> P >> x >> y;
//
//		if (Q > P)
//		{
//			Q ^= P, P ^= Q, Q ^= P;
//			x ^= y, y ^= x, x ^= y;
//		}
//		
//		int diffPerCycle = P - Q;
//		int diff = (y - x) >= 0 ? y - x : y - x + P;
//		
//		int startx = 1, starty = 1 + P*diffPerCycle;
//		int cycle = 0;
//		for (int i = 0; i < P; i++ )
//		{
//			if ((starty-startx)%P == diff)
//				break;
//			starty -= diffPerCycle;
//			cycle++;
//		}
//
//		if (cycle == P)
//			cout << "-1" << endl;
//		else
//			cout << cycle*Q + x << endl;
//		
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}