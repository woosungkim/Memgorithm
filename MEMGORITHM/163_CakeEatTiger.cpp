///*
//
//vcpp, gpp���� ���
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
//	int ncount;		/* ������ �׽�Ʈ ���̽� */
//
//	cin >> ncount;	/* �׽�Ʈ ���̽� �Է� */
//
//	for(int itr=0; itr<ncount; itr++)
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
//		int D, K;
//		cin>> D>> K;
//
//		int result = 0;
//		bool flag = false;
//		for ( int A=1; ; A++ )
//		{
//			for ( int B=1; ; B++ )
//			{
//				int a=A, b=B;
//				for ( int i=2; i<D; i++ )
//				{
//					result = a+b;
//					a = b;
//					b = result;
//				}
//				
//				// ������ �� ����ϰ� ��~~
//				if ( result == K )
//				{
//					flag = true;
//					cout << A<< endl<< B<< endl;
//				}
//				else if ( result > K )
//					break;
//			}
//			if ( flag )
//				break;
//		}
//		
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}