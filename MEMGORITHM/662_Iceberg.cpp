/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;

int r, c;
int iceOrigin[301][301];
int ice[301][301];
int year = 0;
int nPiece = 0;
int piece[301][301];

int rQueue[10001];
int cQueue[10001];
int front = 0, rear = 0;

void initData()
{
	year = 0;
	nPiece = 0;
}

void printIceberg()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << iceOrigin[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}
void printPiece()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << piece[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

void copyIceToOrigin()
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			iceOrigin[i][j] = ice[i][j];
}
void copyOriginToIce()
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			ice[i][j] = iceOrigin[i][j];
}

void after1year()
{
	int dirX[4] = { -1, 0, 1, 0 };
	int dirY[4] = { 0, 1, 0, -1 };

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (iceOrigin[i][j])
			{
				for (int k = 0; k < 4; k++)
				{
					if (i + dirX[k] >= 0 && i + dirX[k] < r &&
						j + dirY[k] >= 0 && j + dirY[k] < c &&
						iceOrigin[i + dirX[k]][j + dirY[k]] == 0 &&
						ice[i][j])
					{
						ice[i][j]--;
					}
				}

			}
		}
	}

	year++;
	copyIceToOrigin();
}

void findPiece()
{
	nPiece = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			piece[i][j] = 0;
			if (iceOrigin[i][j])
				piece[i][j] = 99999;
		}
	}

	while ( true )
	{
		front = 0, rear = 0;

		int iceCnt = 0;
		// 첫 시작점 찾기
		bool findFirst = false;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (iceOrigin[i][j] && piece[i][j] == 99999)
				{
					rQueue[rear] = i;
					cQueue[rear++] = j;
					piece[i][j] = ++nPiece;
					findFirst = true;
					break;
				}
				if (iceOrigin[i][j] == 0)
					iceCnt++;
			}
			if (findFirst)
				break;
		}
		if (!findFirst)
			return;
		if (nPiece > 1)
			return;
		if (iceCnt == 0)
		{
			nPiece = 0;
			return;
		}

		int moveX[4] = { -1, 0, 1, 0 };
		int moveY[4] = { 0, 1, 0, -1 };

		while (true)
		{
			if (front >= rear)
				break;

			int row = rQueue[front];
			int col = cQueue[front++];

			for (int i = 0; i < 4; i++)
			{
				if ( row+moveX[i] >= 0 && row+moveX[i] < r &&
					col+moveY[i] >= 0 && col+moveY[i] < c &&
					piece[row + moveX[i]][col + moveY[i]] == 99999)
				{
					rQueue[rear] = row + moveX[i];
					cQueue[rear++] = col + moveY[i];
					piece[row + moveX[i]][col + moveY[i]] = nPiece;
				}
			}

		}
	}

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
		initData();

		cin >> r >> c;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				cin >> iceOrigin[i][j];

		while (true)
		{
			copyOriginToIce();

			// 1년 후 빙산 상태로
			after1year();
			
			// 몇조각인지 계산
			findPiece();
			// 2조각 이상으로 나뉘어질 때
			if (nPiece > 1)
			{
				cout << year << endl;
				break;
			}
			// 다 녹았을때까지 안나뉘어질 때
			if (nPiece == 0)
			{
				cout << "0" << endl;
				break;
			}
		}

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}