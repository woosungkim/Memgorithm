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
//		int A, B;
//		cin>> A>> B;
//
//		int p = 1;
//		
//		int cnt = 0;
//		int a = A;
//		int b = B;
//		for ( int i=0; i<32; i++ )
//		{	
//			a = A&p;
//			b = B&p;
//			if ( a != b )
//				cnt++;
//
//			p<<=1;
//		}
//		cout<< cnt<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}