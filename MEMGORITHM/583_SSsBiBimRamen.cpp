///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 1000
//#define UNVISITED 999999
//
//struct point {
//	int x;
//	int y;
//	int time;
//};
//
//int myX, myY, ramenX, ramenY;
//
///* for queue */
//struct point mQueue[1000001];
//int minDistance[1001][1001];
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
//void initState(); // initialization
//void findDistanceMin(); // find min distance from sangsu to ramen
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
//		cin >> myX >> myY >> ramenX >> ramenY;
//
//		initState();
//
//		point start = { myX-1, myY-1, 0 };
//		enqueue(start);
//
//		findDistanceMin();
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}
//
//void initState() // initialization
//{
//	initQueue();
//	for (int i = 0; i < MAXSIZE; i++)
//		for (int j = 0; j < MAXSIZE; j++)
//			minDistance[i][j] = UNVISITED;
//
//	minDistance[myX-1][myY-1] = 0;
//}
//
//void findDistanceMin() // find min distance from sangsu to ramen
//{
//	while ( true )
//	{
//		point beforePos = dequeue();
//		point newPos;
//		int x = beforePos.x;
//		int y = beforePos.y;
//		int elapTime = beforePos.time;
//
//		if (x == ramenX-1 && y == ramenY-1)
//		{
//			cout << elapTime << endl;
//			return;
//		}
//
//		if ((x - 2 >= 0) && (y + 1 < MAXSIZE) && (minDistance[x][y] + 1<minDistance[x - 2][y + 1])) // direction 1
//		{
//			minDistance[x - 2][y + 1] = minDistance[x][y] + 1;
//			
//			newPos = { x - 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 >= 0) && (y + 2 < MAXSIZE) && (minDistance[x][y] + 1<minDistance[x - 1][y + 2])) // direction 2
//		{
//			minDistance[x - 1][y + 2] = minDistance[x][y] + 1;
//
//			newPos = { x - 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 < MAXSIZE) && (y + 2 < MAXSIZE) && (minDistance[x][y] + 1<minDistance[x + 1][y + 2])) // d.. 3
//		{
//			minDistance[x + 1][y + 2] = minDistance[x][y] + 1;
//
//			newPos = { x + 1, y + 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 < MAXSIZE) && (y + 1 < MAXSIZE) && (minDistance[x][y] + 1<minDistance[x + 2][y + 1])) // d.. 4
//		{
//			minDistance[x + 2][y + 1] = minDistance[x][y] + 1;
//
//			newPos = { x + 2, y + 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 2 < MAXSIZE) && (y - 1 >= 0) && (minDistance[x][y] + 1<minDistance[x + 2][y - 1])) // d.. 5
//		{
//			minDistance[x + 2][y - 1] = minDistance[x][y] + 1;
//
//			newPos = { x + 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x + 1 < MAXSIZE) && (y - 2 >= 0) && (minDistance[x][y] + 1<minDistance[x + 1][y - 2])) // d.. 6
//		{
//			minDistance[x + 1][y - 2] = minDistance[x][y] + 1;
//
//			newPos = { x + 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 1 >= 0) && (y - 2 >= 0) && (minDistance[x][y] + 1<minDistance[x - 1][y - 2])) // d.. 7
//		{
//			minDistance[x - 1][y - 2] = minDistance[x][y] + 1;
//
//			newPos = { x - 1, y - 2, elapTime + 1 };
//			enqueue(newPos);
//		}
//		if ((x - 2 >= 0) && (y - 1 >= 0) && (minDistance[x][y] + 1<minDistance[x - 2][y - 1])) // d.. 8
//		{
//			minDistance[x - 2][y - 1] = minDistance[x][y] + 1;
//
//			newPos = { x - 2, y - 1, elapTime + 1 };
//			enqueue(newPos);
//		}					
//	}
//}