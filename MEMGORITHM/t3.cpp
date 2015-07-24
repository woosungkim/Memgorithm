///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define DEMONBRIDGE 0
//#define ANGELBRIDGE 1
//
//
//char strDuru[21];
//char demonBridge[101], angelBridge[101];
//int duruLen, bridgeLen;
//int cntWay;
//
//void findWay(int bridge, int idxBridge, int idxDuru)
//{
//	if (bridge == DEMONBRIDGE)
//	{
//		for (int i = idxBridge; i < bridgeLen; i++)
//		{
//			if (demonBridge[i] == strDuru[idxDuru])
//			{
//				if (idxDuru == duruLen - 1)
//				{
//					cntWay++;
//					continue;
//				}
//				else
//					findWay(ANGELBRIDGE, i + 1, idxDuru + 1);
//			}
//		}
//	}
//	else // bridge == ANGELBRIDGE
//	{
//		for (int i = idxBridge; i < bridgeLen; i++)
//		{
//			if (angelBridge[i] == strDuru[idxDuru])
//			{
//				if (idxDuru == duruLen - 1)
//				{
//					cntWay++;
//					continue;
//				}
//				else
//					findWay(DEMONBRIDGE, i + 1, idxDuru + 1);
//			}
//		}
//	}
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
//		cin >> strDuru >> demonBridge >> angelBridge;
//
//		duruLen = strlen(strDuru);
//		bridgeLen = strlen(demonBridge);
//		cntWay = 0;
//
//		findWay(DEMONBRIDGE, 0, 0);
//		findWay(ANGELBRIDGE, 0, 0);
//
//		cout << cntWay << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}