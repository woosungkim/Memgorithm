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
//		int n[4];
//		cin>> n[0]>> n[1]>> n[2]>> n[3];
//
//		int p;
//		int MAX = n[0];
//
//		for ( int i=1; i<4; i++ )
//		{
//			if ( MAX < n[i] )
//			{
//				MAX=n[i];
//				p = i+1;
//			}
//		}
//
//		cout<< MAX<< endl<< p<< endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}