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
//		int n[101];
//		for ( int i=0; i<N; i++ )
//			cin>> n[i];
//
//		
//		for ( int i=1; i<N; i++ )
//		{
//			for ( int j=i; j>0; j-- )
//			{
//				if ( n[j] < n[j-1] )
//				{
//					int tmp = n[j-1];
//					n[j-1] = n[j];
//					n[j] = tmp;
//				}
//			}
//		}
//
//		for ( int i=0; i<N; i++ )
//			cout<< n[i]<< " ";
//		cout<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}