///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		int N;
//		cin>> N;
//
//		long long totalTime = 0;
//		long long S[10001];
//
//		for ( int i=0; i<N; i++ )
//			cin>> S[i];
//		
//		int start = 0;
//	
//		while ( start <= N )
//		{
//			//����
//			for ( int i=start+1; i<N; i++ )
//			{
//				for ( int j=i; j>start; j-- )
//				{
//					if ( S[j] < S[j-1] )
//					{
//						int tmp = S[j-1];
//						S[j-1] = S[j];
//						S[j] = tmp;
//					}
//				}
//			}			
//		
//			S[start+1] = S[start]+S[start+1];
//			start++;
//
//			if ( start == N )
//				break;
//
//			totalTime += S[start];
//		
//		}
//
//		cout<< totalTime<< endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}