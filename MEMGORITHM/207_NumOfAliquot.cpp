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
//		int n;
//		cin>> n;
//
//		int cnt=0;
//		for ( int i=1; i*i<=n; i++ )
//		{
//			if ( i*i == n )
//				cnt++;
//			else if ( n%i == 0 )
//				cnt+=2;
//		}
//		cout<< cnt<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}