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
//		int k;
//		cin>> k;
//
//		int len = 0;
//		int two = 2;
//		int sum = 0;
//
//		while ( sum < k ) // ���� ���� ���ϱ�
//		{
//			sum += two;
//			two *= 2;
//			len++;
//		}
//
//		char luckyNum[101];
//		for ( int i=0; i<100; i++ )
//			luckyNum[i] = '0';
//
//		for ( int i=0; i<k; i++ )
//		{
//			int j=0;
//			while ( 1 )
//			{
//				if ( luckyNum[j] == '0' ) 
//				{
//					luckyNum[j] = '4';
//					break;
//				}
//				else if ( luckyNum[j] == '4' )
//				{
//					luckyNum[j] = '7';
//					break;
//				}
//				else if ( luckyNum[j] == '7' )
//				{
//					luckyNum[j] = '4';
//					j++;
//				}
//			}
//
//		}
//		
//		for ( int i=len-1; i>=0; i-- )
//			cout<< luckyNum[i];
//		cout<< endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}