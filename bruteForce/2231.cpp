#include <iostream>

using namespace std;

/*
���� : 2231
-�����հ� ������

N�� �־����� ��, N�� ���� ���� �����ڸ� ���Ͻÿ�.
������ 0 ���
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