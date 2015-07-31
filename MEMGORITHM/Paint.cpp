///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//
//#define MAX(a, b) ((a)>(b))?(a):(b) 
//int getMaxIndex(char color[], char palette[], int n0, int n1, int n2)
//{
//	if (n0 == 999) return 0;
//	else if (n1 == 999) return 1;
//	else if (n2 == 999) return 2;
//
//	int maxVal = MAX(MAX(n0, n1), n2);
//
//	if (palette[0] == color[maxVal]) return 0;
//	else if (palette[1] == color[maxVal]) return 1;
//	else return 2;
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
//		int n;
//		cin >> n;
//
//		char color[101];
//		cin >> color;
//
//		char palette[3] = { '0', '0', '0' };
//		int checkIndex[3];
//		bool checkPalette[3];
//		int nChange = 0;
//
//		for (int i = 0; color[i] != '\0'; i++)
//		{
//			if (palette[0] == '0') palette[0] = color[i];
//			else if (palette[1] == '0' && (palette[0] != color[i])) palette[1] = color[i];
//			else if (palette[2] == '0' && (palette[0] != color[i]) && (palette[1] != color[i]))	palette[2] = color[i];
//			else
//			{
//				/* 1) 파레트에 이미 있을 경우 */
//				if (color[i] == palette[0] || color[i] == palette[1] || color[i] == palette[2])
//					continue;
//				
//				/* 2) 파레트에 없어서 Conflict났을때 처리 */
//				checkIndex[0] = 999, checkIndex[1] = 999, checkIndex[2] = 999;
//				checkPalette[0] = false, checkPalette[1] = false, checkPalette[2] = false;
//				// 뒤의 칼라들 중 가장 나중에 파레트에서 쓰이는 칼라를 골라서
//				for (int j = i + 1; color[j] != '\0'; j++)
//				{
//					for (int k = 0; k < 3; k++)
//					{
//						if (checkIndex[k] == 999)
//						{
//							for (int l = 0; l < 3; l++)
//							{
//								if (!checkPalette[l] && color[j] == palette[l])
//								{
//									checkPalette[l] = true;
//									checkIndex[l] = j;
//								}
//							}
//						}
//
//					}
//				}
//				// 뒤에 더이상 안나오거나, 가장 늦게 나오는 녀석을 교체
//				int maxIdx = getMaxIndex(color, palette, checkIndex[0], checkIndex[1], checkIndex[2]);
//				
//				
//				palette[maxIdx] = color[i];
//			//	cout << palette[0] << " " << palette[1] << " " << palette[2] << endl;
//				nChange++;
//			}
//		}
//		cout << nChange << endl;
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
//
//}