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
//		char str[10000];
//		cin>> str;
//
//		for ( int i=0; ; i++ )
//		{
//			if ( str[i] == '\0' )
//				break;
//
//			if ( str[i] < 'a' )
//				str[i] += 'a'-'A';
//			else
//				str[i] -= 'a'-'A';
//		}
//		cout<< str<< endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}