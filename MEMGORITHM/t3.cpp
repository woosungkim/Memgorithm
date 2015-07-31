///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//#include <cstdlib>
//#include <math.h>
//
//using namespace std;
//
//int ph[100001];
//int n;
//
//int compare(const void *a, const void *b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//
//int main()
//{
//
//		/*
//
//		알고리즘이 들어가는 부분
//
//		*/
//
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//			cin >> ph[i];
//
//		//sort(ph, ph + n, abc);
//		qsort(ph, n, sizeof(int), compare);
//		//myqsort(0, n - 1);
//		//quicksort(0, n - 1);
//
//
//
//		//for (int i = 0; i < n; i++)
//		//	cout << ph[i] << " ";
//		//cout << endl;
//
//		int lp = 0, rp = n - 1;
//
//		int MIN = 2000000000;
//		int MINminus = ph[0], MINplus = ph[n - 1];
//
//		while (true)
//		{
//			if (lp >= rp)
//				break;
//
//			if (abs(ph[lp] + ph[rp]) < MIN)
//			{
//				MIN = abs(ph[lp] + ph[rp]);
//				MINminus = ph[lp];
//				MINplus = ph[rp];
//			}
//
//			if (abs(ph[lp] + ph[rp - 1]) < MIN || abs(ph[lp + 1] + ph[rp]) < MIN)
//			{
//				if (abs(ph[lp] + ph[rp - 1]) < abs(ph[lp + 1] + ph[rp]))
//					rp--;
//				else
//					lp++;
//			}
//			else if (abs(ph[lp] + ph[rp - 1]) < MIN)
//				rp--;
//			else if (abs(ph[lp + 1] + ph[rp]) < MIN)
//				lp++;
//			else
//			{
//				rp--;
//				lp++;
//			}
//		}
//
//		cout << MINminus << " " << MINplus << endl;
//
//	
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}