///*
//
//VCPP, GPP���� ���
//
//*/
//
//#include <iostream>
//using namespace std;
//
//char pattern[31];
//int n, k;
//
//void swap(char *a, char *b)
//{
//	char tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void printPattern(int idx, int cnt1, int cnt0)
//{
//	// overflow
//	if (cnt0 > n - k)
//		return;
//	
//	//print
//	if (cnt1 == k)
//	{
//		for (int i = 0; i < cnt1 + cnt0; i++)
//			cout << pattern[i];
//		for (int i = cnt1 + cnt0; i < n; i++)
//			cout << '0';
//		cout << endl;
//
//		return;
//	}
//	
//	// recursive
//	pattern[idx] = '1';
//	printPattern(idx + 1, cnt1 + 1, cnt0);
//
//	pattern[idx] = '0';
//	printPattern(idx + 1, cnt1, cnt0 + 1);
//	
//}
//
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
//		cin >> n >> k;
//
//		printPattern(0, 0, 0);
//	}
//
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}