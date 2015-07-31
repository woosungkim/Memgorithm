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
//
//		int width, height;
//		cin >> width >> height;
//
//		int nMarket;
//		cin >> nMarket;
//
//		// setting markets for 1-dimension coordinate
//		int market[102];
//		int X;
//		for (int i = 1; i <= nMarket+1; i++)
//		{
//			int direction, distance;
//			cin >> direction >> distance;
//
//			if (direction == 1) // 북
//				market[i] = distance;
//			else if (direction == 2) // 남
//				market[i] = width + height + (width - distance);
//			else if (direction == 3) // 서
//				market[i] = width + height + width + (height - distance);
//			else if (direction == 4) // 동
//				market[i] = width + distance;
//		}
//		X = market[nMarket + 1];
//
//		// calculate min distance between markets and X
//		int sum = 0;
//		int loop = 2 * width + 2 * height;
//		for (int i = 1; i <= nMarket; i++)
//		{
//			if (market[i] < X)
//				sum += ((X - market[i]) < (market[i] + loop - X) ? (X - market[i]) : (market[i] + loop - X));
//			else // market[i] > X
//				sum += ((market[i] - X) < (X + loop - market[i]) ? (market[i] - X) : (X + loop - market[i]));
//		}
//		
//		// print
//		cout << sum << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}