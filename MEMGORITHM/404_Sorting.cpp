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
//		int N, C;
//		cin>> N>> C;
//
//		int n[50001];
//		for ( int i=0; i<N; i++ )
//			cin>> n[i];
//
//		for ( int i=0; i<N-1; i++ )
//		{
//			for ( int j=1; j<N-i; j++ )
//			{
//				if ( C )
//				{
//					if ( n[j-1] < n[j] )
//					{
//						int tmp = n[j-1];
//						n[j-1] = n[j];
//						n[j] = tmp;
//					}
//				}
//				else
//				{
//					if ( n[j-1] > n[j] )
//					{
//						int tmp = n[j-1];
//						n[j-1] = n[j];
//						n[j] = tmp;
//					}
//				}
//					
//			}
//		}
//
//
//		for ( int i=0; i<N; i++ )
//			cout<< n[i]<< endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}