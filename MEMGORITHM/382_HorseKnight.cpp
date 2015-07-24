///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define SIZE 1000
//#define OBSTACLE -1
//#define UNVISITED 999999
//
//struct point {
//	int x;
//	int y;
//	int time;
//};
//
///* for queue */
//int n, k;
//struct point mQueue[1000001];
//
//int front, rear;
//void initQueue()
//{
//	front = 0; rear = 0;
//}
//void enqueue(struct point c)
//{
//	mQueue[rear++] = c;
//}
//struct point dequeue()
//{
//	if (front == rear)
//	{
//		struct point err = { -1, -1, -1 };
//		return err;
//	}
//	return mQueue[front++];
//}
//
///* for game */
//int board[1001][1001];
//int knightMIN[1001][1001];
//int maMIN[1001][1001];
//
//void printall(); // print all arrays
//
//// move direction 1~8, clockwise
//void initState(); // initialization
//void computeKnightMIN(); // compute knightMIN array by using recursive func
//void computeMaMIN(); // compute maMIN array by using recursive func
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
//		/* input datas */
//		cin >> n >> k;
//
//		initState();
//
//		int x, y;
//		cin >> x >> y;
//
//		/* process */
//		knightMIN[x][y] = 0;
//		maMIN[x][y] = 0;
//
//		// knight
//		initQueue();
//		
//		point start = { x, y, 0 };
//		enqueue(start);
//
//		computeKnightMIN();
//
//		// ma
//		initQueue();
//		
//		start = { x, y, 0 };
//		enqueue(start);
//
//		computeMaMIN();
//
//
//		//printall();
//
//		/* print answer */
//		int cnt = 0;
//		for (int i = 1; i <= n; i++)
//			for (int j = 1; j <= n; j++)
//				if (knightMIN[i][j] < maMIN[i][j])
//					cnt++;
//
//		cout << cnt << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}
//
//void printall() // print all arrays
//{
//	cout << "board" << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	cout << "knightMIN" << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << knightMIN[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	cout << "maMIN" << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << maMIN[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void initState() // initialization
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> board[i][j];
//			if (board[i][j])
//			{
//				knightMIN[i][j] = OBSTACLE;
//				maMIN[i][j] = OBSTACLE;
//			}
//			else
//			{
//				knightMIN[i][j] = UNVISITED;
//				maMIN[i][j] = UNVISITED;
//			}
//		}
//	}
//
//}
//
//void computeKnightMIN() // compute knightMIN array by using recursive func
//{
//	while (front < rear)
//	{
//		point beforePos = dequeue();
//		point newPos;
//		int x = beforePos.x;
//		int y = beforePos.y;
//		int elapTime = beforePos.time;
//
//		if ((x - 2 > 0) && (y + 1 <= n) && (knightMIN[x][y] + 1<knightMIN[x - 2][y + 1])) // direction 1
//		{
//			knightMIN[x - 2][y + 1] = knightMIN[x][y] + 1;
//
//			newPos = { x - 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 > 0) && (y + 2 <= n) && (knightMIN[x][y] + 1<knightMIN[x - 1][y + 2])) // direction 2
//		{
//			knightMIN[x - 1][y + 2] = knightMIN[x][y] + 1;
//			
//			newPos = { x - 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 <= n) && (y + 2 <= n) && (knightMIN[x][y] + 1<knightMIN[x + 1][y + 2])) // d.. 3
//		{
//			knightMIN[x + 1][y + 2] = knightMIN[x][y] + 1;
//
//			newPos = { x + 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 <= n) && (y + 1 <= n) && (knightMIN[x][y] + 1<knightMIN[x + 2][y + 1])) // d.. 4
//		{
//			knightMIN[x + 2][y + 1] = knightMIN[x][y] + 1;
//
//			newPos = { x + 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 <= n) && (y - 1 > 0) && (knightMIN[x][y] + 1<knightMIN[x + 2][y - 1])) // d.. 5
//		{
//			knightMIN[x + 2][y - 1] = knightMIN[x][y] + 1;
//
//			newPos = { x + 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 <= n) && (y - 2 > 0) && (knightMIN[x][y] + 1<knightMIN[x + 1][y - 2])) // d.. 6
//		{
//			knightMIN[x + 1][y - 2] = knightMIN[x][y] + 1;
//			
//			newPos = { x + 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 > 0) && (y - 2 > 0) && (knightMIN[x][y] + 1<knightMIN[x - 1][y - 2])) // d.. 7
//		{
//			knightMIN[x - 1][y - 2] = knightMIN[x][y] + 1;
//		
//			newPos = { x - 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 2 > 0) && (y - 1 > 0) && (knightMIN[x][y] + 1 < knightMIN[x - 2][y - 1])) // d.. 8
//		{
//			knightMIN[x - 2][y - 1] = knightMIN[x][y] + 1;
//
//			newPos = { x - 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//	}
//}
//
//void computeMaMIN() // compute maMIN array by using recursive func
//{
//	while (front < rear)
//	{
//		point beforePos = dequeue();
//		point newPos;
//		int x = beforePos.x;
//		int y = beforePos.y;
//		int elapTime = beforePos.time;
//
//		if ((x - 2 > 0) && (y + 1 <= n) && (maMIN[x][y] + 1<maMIN[x - 2][y + 1]) && maMIN[x - 1][y] != OBSTACLE) // direction 1
//		{
//			maMIN[x - 2][y + 1] = maMIN[x][y] + 1;
//			
//			newPos = { x - 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 > 0) && (y + 2 <= n) && (maMIN[x][y] + 1<maMIN[x - 1][y + 2]) && maMIN[x][y + 1] != OBSTACLE) // direction 2
//		{
//			maMIN[x - 1][y + 2] = maMIN[x][y] + 1;
//			
//			newPos = { x - 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 <= n) && (y + 2 <= n) && (maMIN[x][y] + 1<maMIN[x + 1][y + 2]) && maMIN[x][y + 1] != OBSTACLE) // d.. 3
//		{
//			maMIN[x + 1][y + 2] = maMIN[x][y] + 1;
//		
//			newPos = { x + 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 <= n) && (y + 1 <= n) && (maMIN[x][y] + 1<maMIN[x + 2][y + 1]) && maMIN[x + 1][y] != OBSTACLE) // d.. 4
//		{
//			maMIN[x + 2][y + 1] = maMIN[x][y] + 1;
//			
//			newPos = { x + 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 <= n) && (y - 1 > 0) && (maMIN[x][y] + 1<maMIN[x + 2][y - 1]) && maMIN[x + 1][y] != OBSTACLE) // d.. 5
//		{
//			maMIN[x + 2][y - 1] = maMIN[x][y] + 1;
//			
//			newPos = { x + 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 <= n) && (y - 2 > 0) && (maMIN[x][y] + 1<maMIN[x + 1][y - 2]) && maMIN[x][y - 1] != OBSTACLE) // d.. 6
//		{
//			maMIN[x + 1][y - 2] = maMIN[x][y] + 1;
//			
//			newPos = { x + 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 > 0) && (y - 2 > 0) && (maMIN[x][y] + 1<maMIN[x - 1][y - 2]) && maMIN[x][y - 1] != OBSTACLE) // d.. 7
//		{
//			maMIN[x - 1][y - 2] = maMIN[x][y] + 1;
//			
//			newPos = { x - 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 2 > 0) && (y - 1 > 0) && (maMIN[x][y] + 1<maMIN[x - 2][y - 1]) && maMIN[x - 1][y] != OBSTACLE) // d.. 8
//		{
//			maMIN[x - 2][y - 1] = maMIN[x][y] + 1;
//			
//			newPos = { x - 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//	}
//
//}