///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define UNVISITED 99999
//#define NOWAY -1
//
//struct position
//{
//	int x;
//	int y;
//	int time;
//};
//
//position mQueue[10001];
//
//int front = 0, rear = 0;
//void enqueue(position p)
//{
//	mQueue[rear++] = p;
//}
//position dequeue()
//{
//	return mQueue[front++];
//}
//
//int n, m;
//int maze[101][101];
//
//
//void initState()
//{
//	front = 0;
//	rear = 0;
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			maze[i][j] = NOWAY;
//
//}
//
//void printMaze()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			cout << maze[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void findEscape(int startX, int startY )
//{
//	maze[startX][startY] = 1;
//	position startPos = { startX, startY, 1 };
//	enqueue(startPos);
//
//	int moveX[4] = { -1, 0, 1, 0 };
//	int moveY[4] = { 0, 1, 0, -1 };
//
//	int x, y, elaptime;
//
//	while ( true )
//	{
//		position beforePos = dequeue();
//
//		if (front > rear)
//			break;
//
//		x = beforePos.x;
//		y = beforePos.y;
//		elaptime = beforePos.time;
//
//		for (int i = 0; i < 4; i++)
//		{
//			if (x + moveX[i] >= 0 && x + moveX[i] < 100 &&
//				y + moveY[i] >= 0 && y + moveY[i] < 100 &&
//				maze[x + moveX[i]][y + moveY[i]] == UNVISITED )
//			{
//				position visitPos = { x + moveX[i], y + moveY[i], elaptime + 1 };
//				enqueue(visitPos);
//
//				maze[x + moveX[i]][y + moveY[i]] = elaptime + 1;
//			}
//		}
//
//	}
//
//	//printMaze();
//	cout << maze[n - 1][m - 1] << endl;
//
//}
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
//		cin >> n >> m;
//
//		initState();
//
//		char in;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cin >> in;
//				if (in == '1')
//					maze[i][j] = UNVISITED;
//			}
//		}
//		
//		findEscape( 0, 0 );
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}