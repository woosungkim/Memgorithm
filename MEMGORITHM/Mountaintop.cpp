///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//char str[10001];
//int n, nth;
//int len;
//
//void drawMountain(int k)
//{
//	if (k == n)
//		return;
//
//	str[len] = (k + 1) + '0';
//
//	for (int i = 1; i <= len; i++)
//		str[len + i] = str[i - 1];
//	
//	len = len * 2 + 1;
//
//	drawMountain(k + 1);
//}
//
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
//		len = 1;
//		cin >> n >> nth;
//
//		str[0] = '1';
//		drawMountain(1);
//
//		if (nth > len)
//			cout << "none" << endl;
//		else
//			cout << str[nth - 1] << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}