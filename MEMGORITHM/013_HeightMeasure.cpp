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
//		int N;
//		cin>> N;
//
//		int M[10001];
//		
//		for ( int i=0; i<N; i++ )
//			cin>> M[i];
//
//		int sum = 0;
//		for ( int i=0; i<N; i++ )
//		{
//			for ( int j=i+1; j<N; j++ )
//			{
//				if ( M[i] > M[j] )
//					sum++;
//				else 
//					break;
//			}
//		}
//		
//		cout<< sum<< endl;
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}