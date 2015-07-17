///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define ERROR 'a'
//
//char mQueue[101];
//int front, rear;
//
//void initQueue()
//{
//	front = 0; rear = 0;
//}
//void enqueue(char c)
//{
//	mQueue[rear++] = c;
//}
//char dequeue()
//{
//	if (front == rear)
//		return ERROR;
//	return mQueue[front++];
//}
//void printQueue()
//{
//	for (int i = front; i < rear; i++)
//		cout << mQueue[i] << endl;
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
//		initQueue();
//
//		int N;
//		cin >> N;
//
//		bool isError = false;
//
//		char c;
//		for (int i = 0; i < N; i++)
//		{
//			cin >> c;
//
//			if (c == '-')
//			{
//				if (dequeue() == ERROR)
//				{
//					isError = true;
//					break;
//				}
//			}
//			else
//				enqueue(c);
//		}
//
//		if (isError)
//			cout << "error!" << endl;
//		else
//			printQueue();		
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}