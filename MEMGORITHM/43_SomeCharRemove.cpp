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
//		char str[10001];
//		char rChar[26+1];
//		cin.getline(str, 100, '\n'); // dummy '\n' ó��
//		cin.getline(str, 100, '\n'); // ���ڿ� ���� �޾ƿ���
//		cin >> rChar;
//
//		// process
//		for (int i = 0; str[i] != '\0'; i++)
//			if (strchr(rChar, str[i]) == 0) cout << str[i];
//
//		cout << endl;
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}