/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		/*

		�˰����� ���� �κ�

		*/

		int N;
		cin>> N;
		if ( N > 3 )
		{
			for ( int i=2; i*i<N; i++ )
			{
				if ( N % i == 0 )
				{
					cout<< "No"<< endl;
					break;
				}
				
				if ( i == N/2 )
					cout<< "Yes"<< endl;
			}
		}
		else
		{
			cout<< "Yes"<< endl;
		}
		

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}