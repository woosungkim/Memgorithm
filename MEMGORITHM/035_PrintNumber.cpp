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
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		�˰����� ���� �κ�
//
//		*/
//		
//		char str[51]; 
//		cin >> str;
//
//		int sum = 0;
//		for (int i = 0; str[i] != '\0'; i++)
//		{
//			switch (str[i])
//			{
//			case '0': sum += 6; break;
//			case '1': sum += 2; break;
//			case '2': sum += 5; break;
//			case '3': sum += 5; break;
//			case '4': sum += 4; break;
//			case '5': sum += 5; break;
//			case '6': sum += 6; break;
//			case '7': sum += 3; break;
//			case '8': sum += 7; break;
//			case '9': sum += 6; 
//			}
//		}
//		cout << sum << endl;
//
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}