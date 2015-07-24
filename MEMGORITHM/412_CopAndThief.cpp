///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//struct SPOT {
//	int spot;
//	int time;
//};
//
//
//SPOT mQueue[100001];
//bool visit[100001];
//int front = 0, rear = 0;
//
//
//void initQueue()
//{
//	front = 0;
//	rear = 0;
//}
//void enqueue(SPOT s)
//{
//	mQueue[rear++] = s;
//}
//SPOT dequeue()
//{
//	return mQueue[front++];
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
//
//		initQueue();
//		for (int i = 0; i < 100001; i++)
//			visit[i] = false;
//
//		int N, K;
//		cin >> N >> K;
//
//		SPOT fstSpot = { N, 0 };
//		enqueue(fstSpot);
//
//		while (true)
//		{
//			SPOT preSpot = dequeue();
//			
//			if (preSpot.spot == K)
//			{
//				cout << preSpot.time << endl;
//				break;
//			}
//
//			//	cout << preSpot.spot << " " << preSpot.time << endl;
//
//			SPOT nowSpot;
//			
//			if (!visit[preSpot.spot-1] && preSpot.spot-1 >=0)
//			{
//				visit[preSpot.spot - 1] = true;
//				nowSpot = { preSpot.spot - 1, preSpot.time + 1 };
//				enqueue(nowSpot);
//			}
//			if (!visit[preSpot.spot + 1] && preSpot.spot + 1 <= 100000 && K > N)
//			{
//				visit[preSpot.spot + 1] = true;
//				nowSpot = { preSpot.spot + 1, preSpot.time + 1 };
//				enqueue(nowSpot);
//			}
//			if (!visit[preSpot.spot*2] && preSpot.spot*2 <= 100000 && K> N)
//			{
//				visit[preSpot.spot *2] = true;
//				nowSpot = { preSpot.spot*2, preSpot.time + 1 };
//				enqueue(nowSpot);
//			}
//			
//		}
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}