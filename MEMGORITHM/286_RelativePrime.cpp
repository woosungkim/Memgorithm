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
//		int a, b;
//		cin>> a>> b;
//
//		if ( a > b )
//			a^=b, b^=a, a^=b;
//
//		bool flag = true;
//		for ( int i=2; i<=a; i++ )
//		{
//			if ( (a%i == 0) && (b%i == 0) )
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		flag ? cout<<"yes"<<endl : cout<<"no"<<endl; 
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}