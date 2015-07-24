/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;

#define DEMONBRIDGE 0
#define ANGELBRIDGE 1

char strDuru[21];
char demonBridge[101], angelBridge[101];
int way[21][101];
int duruLen, bridgeLen;
long long numOfWay;

void printWay() // print way array
{
	for (int i = 0; i < duruLen; i++)
	{
		for (int j = 0; j < bridgeLen; j++)
		{
			cout << way[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void initWay(int bridge) // initialization
{
	if (bridge == DEMONBRIDGE)
	{
		for (int i = 0; i < duruLen; i++)
			for (int j = 0; j < bridgeLen; j++)
				way[i][j] = 0;
		for (int i = 0; i < bridgeLen; i++)
			if (demonBridge[i] == strDuru[0])
				way[0][i]++;
	}
	else // ANGELBRIDGE
	{
		for (int i = 0; i < duruLen; i++)
			for (int j = 0; j < bridgeLen; j++)
				way[i][j] = 0;
		for (int i = 0; i < bridgeLen; i++)
			if (angelBridge[i] == strDuru[0])
				way[0][i]++;
	}
}

void findWay(int bridge, int idxDuru) // find way
{
	if (idxDuru == duruLen)
		return;

	if (bridge == DEMONBRIDGE)
	{
		for (int i = 0; i < bridgeLen; i++)
		{
			if (way[idxDuru - 1][i])
			{
				for (int j = i + 1; j < bridgeLen; j++)
				{
					if (angelBridge[j] == strDuru[idxDuru])
						way[idxDuru][j] += way[idxDuru-1][i];
				}
			}
		}
		findWay(ANGELBRIDGE, idxDuru + 1);

		
	}
	else // bridge == ANGELBRIDGE
	{
		for (int i = 0; i < bridgeLen; i++)
		{
			if (way[idxDuru - 1][i])
			{
				for (int j = i + 1; j < bridgeLen; j++)
				{
					if (demonBridge[j] == strDuru[idxDuru])
						way[idxDuru][j] += way[idxDuru-1][i];
				}
			}
		}
		findWay(DEMONBRIDGE, idxDuru + 1);
	}
}

void sumWays() // sum num of way
{
	for (int i = 0; i < bridgeLen; i++)
		if (way[duruLen - 1][i])
			numOfWay += way[duruLen - 1][i];
}

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for (int itr = 0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr + 1) << endl;

		/*

		알고리즘이 들어가는 부분

		*/
		
		cin >> strDuru >> demonBridge >> angelBridge;

		duruLen = strlen(strDuru);
		bridgeLen = strlen(demonBridge);

		numOfWay = 0;
		/* DemonBridge first */
		initWay(DEMONBRIDGE); // initialization
		findWay(DEMONBRIDGE, 1); // find way
		sumWays(); // sum num of way

		/* AngelBridge first */
		initWay(ANGELBRIDGE); // initialization
		findWay(ANGELBRIDGE, 1); // find way
		sumWays(); // sum num of way
		
		//print
		cout << numOfWay << endl;
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
	 
}