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
//		for ( int i=100; i<1000; i++ )
//		{
//			int h, t, o;
//			h = i/100;
//			t = (i-(100*h))/10;
//			o = (i-((100*h)+(10*t)));
//
//			if ( i == ((h*h*h)+(t*t*t)+(o*o*o)) )
//			{
//				cout<< i<< endl;
//			}
//
//		}
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
//
//}