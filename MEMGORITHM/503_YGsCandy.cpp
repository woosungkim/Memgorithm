///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int gem[31];
//int n;
//int sumAll;
//
//int cnt = 0;
//
//void findSumHalf( int sum, int pStart )
//{
//	if (sum == sumAll / 2)
//	{
//		cnt++;
//		return;
//	}
//	if (pStart >= n)
//		return;
//
//	findSumHalf(sum, pStart + 1);
//	sum += gem[pStart];
//	findSumHalf(sum, pStart + 1);
//
//}
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
//		cnt = 0;
//		sumAll = 0;
//
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> gem[i];
//			sumAll += gem[i];
//		}
//
//		if (sumAll % 2 == 1)
//			cout << "impossible" << endl;
//		else
//		{
//			findSumHalf(0, 0);
//
//			if (!cnt)
//				cout << "impossible" << endl;
//			else
//				cout << cnt << endl;
//		}
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}