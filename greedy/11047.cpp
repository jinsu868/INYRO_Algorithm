#include <iostream>

using namespace std;

int coin[10];

int main()
{	
	int n, k;
	int cnt = 0;

	cin >> n >> k;

	for (int i = n-1; i >= 0; i--)
	{
		cin >> coin[i];
	}

	for (int i = 0; i < n; i++)
	{
		cnt += (k / coin[i]);
		k = k % coin[i];
	}

	cout << cnt;

	return 0;
}