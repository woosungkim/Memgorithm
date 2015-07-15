///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
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
//		char str[10001];
//		char rChar[26+1];
//		cin.getline(str, 100, '\n'); // dummy '\n' 처리
//		cin.getline(str, 100, '\n'); // 문자열 한줄 받아오기
//		cin >> rChar;
//
//		// process
//		for (int i = 0; str[i] != '\0'; i++)
//			if (strchr(rChar, str[i]) == 0) cout << str[i];
//
//		cout << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}