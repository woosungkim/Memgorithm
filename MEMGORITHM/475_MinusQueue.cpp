///*
//
//VCPP, GPP���� ���
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}