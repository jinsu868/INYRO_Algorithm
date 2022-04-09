#include <iostream>

using namespace std;

//w = 0, b = 1

int grid[128][128];
int wCnt = 0;
int bCnt = 0;

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
		if (grid[y1][x1] == 0)
		{
			wCnt++;
		}
		else
		{
			bCnt++;
		}
	}
	else if (isSame(x1, y1, x2, y2))
	{
		if (grid[y1][x1] == 0)
		{
			wCnt++;
			return;
		}
		else
		{
			bCnt++;
			return;
		}
	}
	else
	{
		int xMid = (x1 + x2) / 2;
		int yMid = (y1 + y2) / 2;

		solution(x1, y1, xMid, yMid);
		solution(xMid + 1, y1, x2, yMid);
		solution(x1, yMid + 1, xMid, y2);
		solution(xMid + 1, yMid + 1, x2, y2);
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

	solution(0, 0, n-1, n-1);

	cout << wCnt << endl << bCnt;


	return 0;
}