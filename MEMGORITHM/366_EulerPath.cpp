///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define UNCONNECTED -1
//#define UNVISITED 0
//
//struct Edge {
//	int s;
//	int e;
//	int order;
//};
//
//Edge mStack[1000001];
//int top = -1;
//
//void initQueue()
//{
//	top = -1;
//}
//
//void push( Edge p )
//{
//	mStack[++top] = p;
//}
//
//Edge pop()
//{
//	return mStack[top--];
//}
//
//int N, E;
//int graphOrigin[101][101];
//int graph[101][101];
//
//void initGraph()
//{
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)
//			graphOrigin[i][j] = UNCONNECTED;
//}
//
//void copyGraph()
//{
//	for (int i = 1; i <= N; i++)
//		for (int j = 1; j <= N; j++)
//			graph[i][j] = graphOrigin[i][j];
//}
//
//void printGraph()
//{
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//			cout << graph[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}
//
//Edge isDrawable1Que(int start)
//{
//	// 시작점으로부터 나가는 선들 스택에 push
//	Edge befoEdge = { 0, start, 0 };
//
//	int cnt = 10;
//	while (true)
//	{
//		if (befoEdge.order == E)
//			return befoEdge;
//
//		bool isMovable = false;
//		// 이후 지날 선들 push
//		for (int i = N; i >= 1; i--)
//		{
//			if (graph[befoEdge.e][i] == UNVISITED)
//			{
//				isMovable = true;
//				Edge afterEdge = { befoEdge.e, i, befoEdge.order+1 };
//				push(afterEdge);
//			}
//		}
//
//		if (!isMovable)
//		{
//			graph[befoEdge.s][befoEdge.e] = UNVISITED;
//		}
//
//		// 다음 단계에 탐색할 선 pop
//		befoEdge = pop();
//		graph[befoEdge.s][befoEdge.e] = befoEdge.order;
//		graph[befoEdge.e][befoEdge.s] = befoEdge.order;
//
//		// no result
//		if (top == -1)
//			return { -1, -1, -1 };
//
//		/*cout << befoEdge.s << " " << befoEdge.e << endl;
//		printGraph();*/
//	}
//
//}
//
//void printPath(int e, int order)
//{
//	if (order > 0)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			if (graph[i][e] == order)
//			{
//				printPath(i, order-1);
//				break;
//			}
//		}
//	}
//
//	cout << e << " ";
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
//		cin >> N >> E;
//
//		initGraph();
//
//		for (int i = 0; i < E; i++)
//		{
//			int x, y;
//			cin >> x >> y;
//			graphOrigin[x][y] = 0;
//			graphOrigin[y][x] = 0;
//		}
//
//		for (int i = 1; i <= N; i++)
//		{
//			initQueue();
//			copyGraph();
//			
//			Edge lastEdge;
//			if ((lastEdge = isDrawable1Que(i)).order != -1)
//			{
//				printPath(lastEdge.s, lastEdge.order-1);
//				cout << lastEdge.e << endl;
//				break;
//			}
//
//			if ( i == N )
//				cout << "0" << endl;
//				
//		}
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}