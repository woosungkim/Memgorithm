///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int nCount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for(int itr=0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr+1) << endl;
//
//		/*
//
//		�˰����� ���� �κ�
//
//		*/
//
//		int A, B, C;
//		cin>> A>> B>> C;
//
//		int M = A*B*C;
//		int result[10];
//		for ( int i=0; i<10; i++ )// input
//			result[i] = 0;
//
//		while ( M>9 ) // process
//		{
//			result[M%10]++;
//			M/=10;
//		}
//		result[M]++;
//
//		for ( int i=0; i<10; i++ ) // print
//			cout<< result[i]<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}