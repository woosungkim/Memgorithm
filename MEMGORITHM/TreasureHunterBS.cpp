///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//struct point {
//	int x;
//	int y;
//	int time;
//};
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
//		char map[51][51]; // ���� ����
//		bool visit[51][51]; // �湮 üũ
//		int hour[51][51]; // �ɸ��� �ð�
//
//		int MAX = 0;
//		// �ʱ�ȭ
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
//		// queue ���� ����
//		struct point mQueue[2501];
//
//		for (int r = 0; r < row; r++)
//		{
//			for (int c = 0; c < col; c++)
//			{
//				if (map[r][c] == 'W')
//					continue;
//
//
//				int qPtr = 0;
//				int top = 0;
//				
//				visit[r][c] = true;
//				hour[r][c] = 0;
//
//				mQueue[top].x = r;
//				mQueue[top].y = c;
//				mQueue[top++].time = 0;
//
//				while (qPtr < top)
//				{
//					int x = mQueue[qPtr].x;
//					int y = mQueue[qPtr].y;
//					int elapHour = mQueue[qPtr++].time;
//					elapHour++;
//					
//					if ((x - 1 >= 0) && (map[x - 1][y] == 'L') && (visit[x - 1][y]== false))
//					{
//						visit[x - 1][y] = true;
//						hour[x - 1][y] = elapHour;
//						mQueue[top].x = x - 1;
//						mQueue[top].y = y;
//						mQueue[top++].time = elapHour;
//					}
//					if ((y - 1 >= 0) && (map[x][y - 1] == 'L') && (visit[x][y - 1] == false))
//					{
//						visit[x][y - 1] = true;
//						hour[x][y - 1] = elapHour;
//						mQueue[top].x = x;
//						mQueue[top].y = y - 1;
//						mQueue[top++].time = elapHour;
//					}
//					if ((x + 1 < row) && (map[x + 1][y] == 'L') && (visit[x + 1][y] == false))
//					{
//						visit[x + 1][y] = true;
//						hour[x + 1][y] = elapHour;
//						mQueue[top].x = x + 1;
//						mQueue[top].y = y;
//						mQueue[top++].time = elapHour;
//					}
//					if ((y + 1 < col) && (map[x][y + 1] == 'L') && (visit[x][y + 1] == false))
//					{
//						visit[x][y + 1] = true;
//						hour[x][y + 1] = elapHour;
//						mQueue[top].x = x;
//						mQueue[top].y = y + 1;
//						mQueue[top++].time = elapHour;
//					}
//					
//					if (elapHour > MAX)
//						MAX = elapHour;
//
//				}
//
//				// �ʱ�ȭ
//				for (int i = 0; i < row; i++)
//				{
//					for (int j = 0; j < col; j++)
//					{
//						visit[i][j] = false;
//						hour[i][j] = 0;
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}
//
//
