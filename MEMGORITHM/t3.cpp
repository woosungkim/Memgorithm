///*
//
//VCPP, GPP���� ���
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}