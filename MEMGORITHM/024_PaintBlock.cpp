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
//		int A, B, C;
//		cin >> A >> B >> C;
//
//		int numBlock = A*B*C;
//		
//		numBlock -= 8; // �� ������
//
//		// �� �𼭸�
//		if (A > 2 && B > 2)
//			numBlock -= (A - 2)*(B - 2) * 2;
//		if (B > 2 && C > 2)
//			numBlock -= (B - 2)*(C - 2) * 2;
//		if (A > 2 && C > 2)
//			numBlock -= (A - 2)*(C - 2) * 2;
//
//		// ����
//		if (A > 2 && B > 2 && C > 2)
//			numBlock -= (A - 2)*(B - 2)*(C - 2);
//
//		cout << numBlock << endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}