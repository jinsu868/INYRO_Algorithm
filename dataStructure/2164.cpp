#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int n;
	int card;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{
		card = q.front();
		q.pop();

		if (q.empty())
		{
			break;
		}

		card = q.front();
		q.pop();
		q.push(card);
	}

	cout << card;


	return 0;
}