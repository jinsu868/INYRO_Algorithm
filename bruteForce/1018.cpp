#include <iostream>

#define INF 987654321

using namespace std;

char chessBoard[51][51];

char patt1[8][8] = {
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
};

char patt2[8][8] = {
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
	'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
	'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
};


int main()
{
	int n, m;
	int cnt1 = 0;
	int cnt2 = 0;
	int ans = INF;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> chessBoard[i][j];
		}
	}

	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			for (int k = 0; k < 8; k++)
			{
				for (int t = 0; t < 8; t++)
				{
					if (chessBoard[i + k][j + t] != patt1[k][t])
					{
						cnt1++;
					}
					if (chessBoard[i + k][j + t] != patt2[k][t])
					{
						cnt2++;
					}
				}
			}

			if (cnt1 > cnt2)
			{
				if (ans > cnt2)
				{
					ans = cnt2;
				}
			}
			else
			{
				if (ans > cnt1)
				{
					ans = cnt1;
				}
			}

			cnt1 = cnt2 = 0;
		}
	}

	cout << ans;
	

	return 0;
}