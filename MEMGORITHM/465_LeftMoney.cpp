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
//		int m;
//		cin>> m;
//
//		m = 1000-m;
//
//		int hund=0, fif=0, ten=0;
//
//		while ( m != 0 )
//		{
//			if ( m >= 100 )
//			{
//				m-=100;
//				hund++;
//			}
//			else if ( m >= 50 )
//			{
//				m-=50;
//				fif++;
//			}
//			else if ( m >= 10 )
//			{
//				m-=10;
//				ten++;
//			}
//		}
//
//		cout<< hund<< " "<< fif<< " "<< ten<< endl;
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}