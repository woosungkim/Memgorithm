///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//int MIN = 999;
//int M, S, C;
//int cage[201];
//void findMinLength(int nChoice, int idxStart, int idxNow, int sum)
//{
//	//cout << nChoice << " " << idxStart << " " << idxNow << " " << sum << endl;
//	if (nChoice == M - 1 || idxNow == C - 1 )
//	{
//		if (sum + (cage[C - 1] - cage[idxStart] + 1) < MIN)
//			MIN = sum + (cage[C - 1] - cage[idxStart] + 1);
//		return;
//	}
//
//	// ���� �� ��
//	findMinLength(nChoice + 1, idxNow + 1, idxNow + 1, (sum + cage[idxNow] - cage[idxStart] + 1));
//	// ���� �� �� ��
//	findMinLength(nChoice, idxStart, idxNow + 1, sum);
//
//}
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
//		MIN = 999;
//		
//		cin >> M >> S >> C;
//
//
//		for (int i = 0; i < C; i++)
//			cin >> cage[i];
//
//		findMinLength(0, 0, 0, 0);
//
//		cout << MIN << endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}