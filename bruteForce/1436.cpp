#include <iostream>

using namespace std;

int main()
{
	int N;
	int num = 0; //제목 number
	int t; //666세기
	int k = 665; //665부터 쭉 증가.

	cin >> N;

	while (num < N)
	{
		t = 0;
		k++;
		int temp = k;
		bool valid = false;

		while (temp)
		{
			if (t == 3)
			{
				valid = true;
				break;
			}

			if (temp % 10 != 6)
			{
				t = 0;
			}
			else
			{
				t++;
			}

			temp /= 10;
		}

		if (t == 3)
		{
			valid = true;
		}

		if (valid)
		{
			num++;
		}
	}

	cout << k;

	return 0;
}