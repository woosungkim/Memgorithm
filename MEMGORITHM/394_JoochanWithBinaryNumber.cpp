///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//
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
//		int n;
//		cin>> n;
//
//		int two = 1024;
//		while ( two > n )
//			two /= 2;
//
//		while ( two )
//		{
//			if ( n >= two )
//			{
//				cout<< "1";
//				n-=two;
//			}
//			else
//				cout<< "0";
//
//			
//			two/=2;		
//		}
//		cout<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}