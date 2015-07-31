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
//	int len = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//		len++;
//
//	return len;
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
//		char str[256 + 1];
//		cin >> str;
//
//		int len = mystrlen(str);
//
//		for (int i = 0; i < len-2; i++)
//		{
//			if (str[i] == 'F' && str[i + 1] == 'O' && str[i + 2] == 'O')
//				str[i] = 'O', str[i + 2] = 'F',i++;
//		}
//		cout << str << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}