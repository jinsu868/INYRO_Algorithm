#include <iostream>

using namespace std;

int grid[2187][2187];
int zCnt = 0;
int oCnt = 0;
int mCnt = 0;

bool isSame(int x1, int y1, int x2, int y2)
{
	int s = grid[y1][x1];

	for (int i = y1; i <= y2; i++)
	{
		for (int j = x1; j <= x2; j++)
		{
			if (grid[i][j] != s)
			{
				return false;
			}
		}
	}

	return true;
}

void solution(int x1, int y1, int x2, int y2)
{
	if (x1 == x2)
	{
		if (grid[y1][x1] == -1)
		{
			mCnt++;
		}
		else if (grid[y1][x1] == 0)
		{
			zCnt++;
		}
		else
		{
			oCnt++;
		}
	}
	else if (isSame(x1, y1, x2, y2))
	{
		if (grid[y1][x1] == -1)
		{
			mCnt++;
			return;
		}
		else if (grid[y1][x1] == 0)
		{
			zCnt++;
			return;
		}
		else
		{
			oCnt++;
			return;
		}
	}
	else 
	{
		int xL = (x2 + 2 * x1) / 3;
		int xR = (2 * x2 + x1) / 3;
		int yL = (y2 + 2 * y1) / 3;
		int yR = (2 * y2 + y1) / 3;

		solution(x1, y1, xL, yL);
		solution(xL + 1, y1, xR, yL);
		solution(xR + 1, y1, x2, yL);
		solution(x1, yL + 1, xL, yR);
		solution(xL + 1, yL + 1, xR, yR);
		solution(xR + 1, yL + 1, x2, yR);
		solution(x1, yR + +1, xL, y2);
		solution(xL + 1, yR + 1, xR, y2);
		solution(xR + 1, yR + 1, x2, y2);
	}
}


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> grid[i][j];
		}
	}

	solution(0, 0, n - 1, n - 1);

	cout << mCnt << endl << zCnt << endl << oCnt;

	return 0;
}