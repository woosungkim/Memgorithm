///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//struct area {
//	int x, y;
//	int width;
//	int height;
//};
//
//struct area area1, area2;
//
//int in1[11][11];
//int in2[11][11];
//
//void getComponents() // get components, x, y, w, h
//{
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			cin >> in1[i][j];
//	for (int i = 0; i < 10; i++)
//		for (int j = 0; j < 10; j++)
//			cin >> in2[i][j];
//
//	int x = -1, y = -1;
//	int w = 0, h = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			w += in1[i][j];
//			if (x == -1 && in1[i][j] == 1) x = i;
//		}
//		if (w) break;
//	}
//
//	for (int j = 0; j < 10; j++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			h += in1[i][j];
//			if (y == -1 && in1[i][j] == 1) y = j;
//		}
//		if (h) break;
//	}
//	if (x == -1) x = 0;
//	if (y == -1)y = 0;
//	area1 = { x, y, w, h };
//
//	x = -1, y = -1;
//	w = 0, h = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			w += in2[i][j];
//			if (x == -1 && in2[i][j] == 1) x = i;
//		}
//		if (w) break;
//	}
//
//	for (int j = 0; j < 10; j++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			h += in2[i][j];
//			if (y == -1 && in2[i][j] == 1) y = j;
//		}
//		if (h) break;
//	}
//	if (x == -1) x = 0;
//	if (y == -1)y = 0;
//	area2 = { x, y, w, h };
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
//		
//		getComponents();
//		
//		if (area1.y > area2.y)
//		{
//			struct area tmp = area1;
//			area1 = area2;
//			area2 = tmp;
//		}
//
//		if (area1.x < area2.x && area1.y < area2.y)
//			cout << (area1.x + area1.height - area2.x) * (area1.y + area1.width - area2.y) << endl;
//		else
//			cout << (area2.x + area2.height - area1.x) * (area1.y + area1.width - area2.y) << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}
//


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
//		int area1[11][11] = { 0 };
//		int area2[11][11] = { 0 };
//		
//		for (int i = 0; i < 10; i++)
//			for (int j = 0; j < 10; j++)
//				cin >> area1[i][j];
//
//		int cnt = 0;
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				cin >> area2[i][j];
//				if (area1[i][j] && area2[i][j])
//					cnt++;
//			}
//		}
//		cout << cnt << endl;
//	
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}