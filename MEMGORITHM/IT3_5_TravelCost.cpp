///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int n;
//int confer[13][13];
//int MIN = 9999;
//bool check[13];
//
//void findMinMove(int nMove, int now, int sum)
//{
//	if (sum >= MIN)
//		return;
//
//	if (nMove >= n-1)
//	{
//		sum += confer[now][1];
//		if (sum < MIN)
//			MIN = sum;
//		return;
//	}
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (check[i] == false)
//		{
//			check[i] = true;
//			findMinMove(nMove+1, i, sum + confer[now][i]);
//			check[i] = false;
//		}
//		
//	}
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
//		MIN = 9999;
//		
//		cin >> n;
//
//		for (int i = 1; i <= n; i++)
//			check[i] = false;
//
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				cin >> confer[i][j];
//
//		findMinMove(0, 1, 0);
//
//		cout << MIN << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}