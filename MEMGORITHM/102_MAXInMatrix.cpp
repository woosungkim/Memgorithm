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
//		int m[9][9];
//		for ( int i=0; i<9; i++ )
//			for ( int j=0; j<9; j++ )
//				cin>> m[i][j];
//		
//		int MAX = m[0][0];
//
//		int r=0, c=0;
//		for ( int i=0; i<9; i++ )
//		{
//			for ( int j=0; j<9; j++ )
//			{
//				if ( MAX < m[i][j] )
//				{
//					MAX = m[i][j];
//					r = i+1;
//					c = j+1;
//				}
//			}
//		}
//
//		cout<< MAX<< endl<< r<< " "<< c<< endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}