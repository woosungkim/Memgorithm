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
//
//		int N, M;
//		cin >> N >> M;
//
//
//		int lib[101][101];
//		int nPeople = 0;
//		int sec[101][101];
//
//
//		for (int i = 0; i<M; i++)
//		{
//			for (int j = 0; j<N; j++)
//			{
//				cin >> lib[i][j];
//				if (lib[i][j] == 1)
//					nPeople++;
//
//				sec[i][j] = 0;
//			}
//		}
//
//
//
//		int bombRow, bombCol;
//		cin >> bombRow >> bombCol;
//		lib[bombCol - 1][bombRow - 1] = -1;// �����Ǹ� -1
//		sec[bombCol - 1][bombRow - 1] = 1;
//
//
//		int infectedPeople = 1;
//		int elapSec = 1;
//		int nowInfect = 0;
//		while (infectedPeople < nPeople)
//		{
//			elapSec++;
//			for (int i = 0; i<M; i++)
//			{
//				for (int j = 0; j<N; j++)
//				{
//
//					if (sec[i][j] == elapSec - 1)// ���� ����Ŭ�� ������ �ڸ� ã����,
//					{
//						if ((i - 1 >= 0) && (lib[i - 1][j] == 1))
//						{
//							lib[i - 1][j] = -1;
//							sec[i - 1][j] = elapSec;
//							infectedPeople++;
//							nowInfect++;
//						}
//						if ((j - 1 >= 0) && (lib[i][j - 1] == 1))
//						{
//
//							lib[i][j - 1] = -1;
//							sec[i][j - 1] = elapSec;
//							infectedPeople++;
//							nowInfect++;
//						}
//						if ((i + 1 < M) && (lib[i + 1][j] == 1))
//						{
//							lib[i + 1][j] = -1;
//							sec[i + 1][j] = elapSec;
//							infectedPeople++;
//							nowInfect++;
//						}
//						if ((j + 1 < N) && (lib[i][j + 1] == 1))
//						{
//							lib[i][j + 1] = -1;
//							sec[i][j + 1] = elapSec;
//							infectedPeople++;
//							nowInfect++;
//						}
//
//					}
//
//				}
//			}
//
//			if (nowInfect == 0)
//			{
//				elapSec--;
//				break;
//			}
//
//			nowInfect = 0;
//
//		}
//		cout << elapSec << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}
//
//
//
