///*
//
//VCPP, GPP���� ���
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
//				/* 1) �ķ�Ʈ�� �̹� ���� ��� */
//				if (color[i] == palette[0] || color[i] == palette[1] || color[i] == palette[2])
//					continue;
//				
//				/* 2) �ķ�Ʈ�� ��� Conflict������ ó�� */
//				checkIndex[0] = 999, checkIndex[1] = 999, checkIndex[2] = 999;
//				checkPalette[0] = false, checkPalette[1] = false, checkPalette[2] = false;
//				// ���� Į��� �� ���� ���߿� �ķ�Ʈ���� ���̴� Į�� ���
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
//				// �ڿ� ���̻� �ȳ����ų�, ���� �ʰ� ������ �༮�� ��ü
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
//	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */
//
//}