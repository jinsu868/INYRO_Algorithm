#include <iostream>

using namespace std;

/*
문제 : 2231
-분해합과 생성자

N이 주어졌을 때, N의 가장 작은 생성자를 구하시오.
없으면 0 출력
*/

int main()
{
	int N;
	int i = 1;

	cin >> N;

	while (i < N)
	{
		int sum = i;
		int temp = i;

		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N)
		{
			cout << i;
			break;
		}

		i++;
	}

	if (i == N)
	{
		cout << 0;
	}

	return 0;
}