///*
//
//VCPP, GPP에서 사용
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
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		알고리즘이 들어가는 부분
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
//		lib[bombCol - 1][bombRow - 1] = -1;// 감염되면 -1
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
//					if (sec[i][j] == elapSec - 1)// 이전 싸이클에 감염된 자를 찾으면,
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
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}
//
//
//
