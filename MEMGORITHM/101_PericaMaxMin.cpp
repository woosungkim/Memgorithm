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
//		int A, B;
//		cin >> A >> B;
//
//		int sum = A + B;
//		int sumMAX = sum;
//		int sumMIN = sum;
//
//		int mask = 10;
//		int correctVal = 1;
//
//		while (A || B)
//		{
//			if (A)
//			{
//				if (A % mask == 5)
//					sumMAX += correctVal;
//				else if (A % mask == 6)
//					sumMIN -= correctVal;
//				A /= mask;
//			}
//			
//			if (B)
//			{
//				if (B % mask == 5)
//					sumMAX += correctVal;
//				else if (B % mask == 6)
//					sumMIN -= correctVal;
//				B /= mask;
//			}
//			
//			correctVal *= 10;
//		}
//
//		cout << sumMIN << " " << sumMAX << endl;
//
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}