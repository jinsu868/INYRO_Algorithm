#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int height, weight;
	vector<pair<int, int>> bodySize;
	pair<int, int> cur;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> weight >> height;
		bodySize.push_back({ weight, height });
	}

	for (int i = 0; i < n; i++)
	{
		cur = bodySize[i];
		int rank = 1;

		for (auto it = bodySize.begin(); it != bodySize.end(); it++)
		{
			if (cur.first < it->first && cur.second < it->second)
			{
				rank++;
			}
		}

		cout << rank << " ";
	}

	return 0;
}