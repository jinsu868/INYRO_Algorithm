#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int time[1000];
	int result = 0;
	int temp = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> time[i];
	}

	sort(time, time + n);

	for (int i = 0; i < n; i++)
	{
		temp += time[i];
		result += temp;
	}

	cout << result;

	return 0;
}