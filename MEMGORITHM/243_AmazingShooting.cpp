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
//		int arr[6][6];
//
//		for ( int i=0; i<6; i++ )
//			for ( int j=0; j<6; j++ )
//				cin>> arr[i][j];
//
//		int MAX_SUM = 0;
//		for ( int i=0; i<6; i++ )
//		{
//			for ( int j=0; j<6; j++ )
//			{
//				int SUM = arr[i][j];
//
//				if ( i-1 >= 0 ) SUM += arr[i-1][j];
//				if ( j-1 >= 0 ) SUM += arr[i][j-1];
//				if ( i+1 < 6 ) SUM += arr[i+1][j];
//				if ( j+1 < 6 ) SUM += arr[i][j+1];
//
//				if ( SUM > MAX_SUM )
//					MAX_SUM = SUM;
//			}
//		}
//
//		cout<< MAX_SUM<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}