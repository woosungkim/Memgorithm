///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//int mystrlen(char str[])
//{
//	int cnt = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		cnt++;
//	
//	return cnt;
//}
//int main()
//{
//
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for (int itr = 0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr + 1) << endl;
//
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//		char num1[1001];
//		char num2[1001];
//
//		cin >> num1 >> num2;
//
//		int n1len = mystrlen(num1);
//		int n2len = mystrlen(num2);
//
//		char result[1001];
//		int carry = 0;
//		int ptr = 0;
//		while (true)
//		{
//			if (n1len - ptr - 1 < 0 && n2len - ptr - 1 < 0)
//				break;
//
//			int n1 = 0, n2 = 0;
//			if ((n1len - ptr - 1) >= 0)
//				n1 = num1[n1len - ptr - 1] - '0';
//			if ((n2len - ptr - 1) >= 0)
//				n2 = num2[n2len - ptr - 1] - '0';
//				
//			int sum = n1 + n2 + carry;
//			carry = 0;
//			if (sum >= 10)
//			{
//				sum -= 10;
//				carry = 1;
//			}
//			result[ptr++] = sum + '0';
//
//		}
//		if (carry)
//			result[ptr++] = 1 + '0';
//
//		for (int i = ptr-1; i >= 0; i--)
//			cout << result[i];
//		cout << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}