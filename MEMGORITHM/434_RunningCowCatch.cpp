///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define MAXSIZE 100001
//#define UNVISITED 999999
//
//int mQueue[100001];
//
//int front = 0, rear = 0;
//void initQueue()
//{
//	front = 0;
//	rear = 0;
//}
//void enqueue(int c)
//{
//	mQueue[rear++] = c;
//}
//int dequeue()
//{
//	return mQueue[front++];
//}
//
//int minuteMIN[100001];
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
//		initQueue();
//
//		for (int i = 0; i < MAXSIZE; i++)
//			minuteMIN[i] = UNVISITED;
//
//		int start, cow;
//		cin >> start >> cow;
//
//		
//		minuteMIN[start] = 0;
//		enqueue(start);
//
//		while ( true )
//		{
//			int nowCoord = dequeue();
//			if (nowCoord == cow)
//			{
//				cout << minuteMIN[nowCoord] << endl;
//				break;
//			}
//			
//			if (nowCoord - 1 >= 0 )
//			{
//				if (minuteMIN[nowCoord] + 1 < minuteMIN[nowCoord - 1])
//				{
//					minuteMIN[nowCoord - 1] = minuteMIN[nowCoord] + 1;
//					enqueue(nowCoord - 1);
//				}
//			}
//			if (nowCoord + 1 <= 100000 )
//			{
//				if (minuteMIN[nowCoord] + 1 < minuteMIN[nowCoord + 1])
//				{
//					minuteMIN[nowCoord + 1] = minuteMIN[nowCoord] + 1;
//					enqueue(nowCoord + 1);
//				}
//
//			}
//			if (nowCoord * 2 <= 100000)
//			{
//				if (minuteMIN[nowCoord] + 1 < minuteMIN[nowCoord * 2])
//				{
//					minuteMIN[nowCoord * 2] = minuteMIN[nowCoord] + 1;
//					enqueue(nowCoord * 2);
//				}
//				
//			}
//
//		}
//
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}