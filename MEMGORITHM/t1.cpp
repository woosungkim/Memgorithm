///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define UNDRAWN 99999
//#define DRAWN -1
//
//struct position
//{
//	int x;
//	int y;
//	int nTerrain;
//};
//
//position mQueue[10001];
//
//int front = 0, rear = 0;
//void initQueue()
//{
//	front = 0;
//	rear = 0;
//}
//void enqueue(position p)
//{
//	mQueue[rear++] = p;
//}
//position dequeue()
//{
//	return mQueue[front++];
//}
//
//int n;
//int terrainOrigin[101][101];
//int terrain[101][101];
//int terrainNum = 0;
//int MAXTerrain = 0;
//
//
//void initState()
//{
//	terrainNum = 0;
//	MAXTerrain = 0;
//}
//
//void printTerrain()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			cout << terrain[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}
//
//void findTerrain(int startX, int startY)
//{
//	terrain[startX][startY] = ++terrainNum;
//	position startPos = { startX, startY, terrainNum };
//	enqueue(startPos);
//
//	int moveX[4] = { -1, 0, 1, 0, };
//	int moveY[4] = { 0, 1, 0, -1 };
//
//	int x, y, nTerrain;
//
//	while (true)
//	{
//		position beforePos = dequeue();
//
//		if (front > rear)
//			break;
//
//		x = beforePos.x;
//		y = beforePos.y;
//		nTerrain = beforePos.nTerrain;
//
//		for (int i = 0; i < 8; i++)
//		{
//			if (x + moveX[i] >= 0 && x + moveX[i] < 100 &&
//				y + moveY[i] >= 0 && y + moveY[i] < 100 &&
//				terrain[x + moveX[i]][y + moveY[i]] == UNDRAWN)
//			{
//				position visitPos = { x + moveX[i], y + moveY[i], nTerrain };
//				enqueue(visitPos);
//
//				terrain[x + moveX[i]][y + moveY[i]] = nTerrain;
//			}
//		}
//	}
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
//		cin >> n;
//
//		initState();
//
//		int MAXheight = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> terrainOrigin[i][j];
//				if (terrainOrigin[i][j] > MAXheight)
//					MAXheight = terrainOrigin[i][j];
//			}
//		}
//
//		
//		while (--MAXheight)
//		{
//			terrainNum = 0;
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (terrainOrigin[i][j] <= MAXheight)
//						terrain[i][j] = DRAWN;
//					else
//						terrain[i][j] = UNDRAWN;
//				}
//			}
//			//cout << MAXheight << endl;
//			//printTerrain();
//
//			for (int i = 0; i<n; i++)
//			{
//				for (int j = 0; j<n; j++)
//				{
//					if (terrain[i][j] == UNDRAWN)
//					{
//						initQueue();
//						findTerrain(i, j);
//					}
//				}
//			}
//
//			if (terrainNum > MAXTerrain)
//				MAXTerrain = terrainNum;
//		}
//		
//		cout << MAXTerrain << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}