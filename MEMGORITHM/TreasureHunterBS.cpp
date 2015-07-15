///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int row, col;
//		cin >> row >> col;
//
//		char map[51][51]; // 보물 지도
//		bool visit[51][51]; // 방문 체크
//		int hour[51][51]; // 걸리는 시간
//
//		int MAX = 0;
//		// 초기화
//		for (int i = 0; i < row; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cin >> map[i][j];
//				visit[i][j] = false;
//				hour[i][j] = 0;
//			}
//		}
//		
//		int elapHour = 1;
//		for (int r = 0; r < row; r++)
//		{
//			for (int c = 0; c < col; c++)
//			{
//				if (map[r][c] == 'W')
//					continue;
//				
//				// 매 점에서부터의 최단거리 계산
//				visit[r][c] = true;
//				hour[r][c] = elapHour;
//				int nowMove = 0;
//				while (1)
//				{
//					elapHour++;
//					for (int i = 0; i < row; i++)
//					{
//						for (int j = 0; j < col; j++)
//						{
//							if ( hour[i][j] == elapHour-1 )
//							{
//								if ((i - 1 >= 0) && (map[i - 1][j] == 'L') && (visit[i - 1][j] == false))
//								{
//									visit[i - 1][j] = true;
//									hour[i - 1][j] = elapHour;
//									nowMove++;
//								}
//								if ((j - 1 >= 0) && (map[i][j - 1] == 'L') && (visit[i][j - 1] == false))
//								{
//									visit[i][j - 1] = true;
//									hour[i][j - 1] = elapHour;
//									nowMove++;
//								}
//								if ((i + 1 < row) && (map[i + 1][j] == 'L') && (visit[i + 1][j] == false))
//								{
//									visit[i + 1][j] = true;
//									hour[i + 1][j] = elapHour;
//									nowMove++;
//								}
//								if ((j + 1 < col) && (map[i][j + 1] == 'L') && (visit[i][j + 1] == false))
//								{
//									visit[i][j + 1] = true;
//									hour[i][j + 1] = elapHour;
//									nowMove++;
//								}
//							}
//						}
//					}
//
//
//					if (nowMove == 0)
//					{
//						int max = 0;
//						for (int i = 0; i < row; i++)
//						{
//							for (int j = 0; j < col; j++)
//							{
//								if (hour[i][j] > max)
//									max = hour[i][j];
//							}
//						}
//						
//						if (MAX < max)
//							MAX = max;
//						break;
//
//					}
//					nowMove = 0;
//				}
//
//				// 초기화
//				elapHour = 1;
//				for (int i = 0; i < row; i++)
//				{
//					for (int j = 0; j < col; j++)
//					{
//						visit[i][j] = false;
//						hour[i][j] = 0;
//						
//					}
//				}
//
//			}
//		}
//
//		cout << MAX - 1 << endl;
//		
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}
//
//
