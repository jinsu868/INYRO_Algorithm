#include <iostream>

using namespace std;

int main()
{
	char line[51];
	int i = 0;
	bool mState = false;
	int temp;
	int result = 0;

	cin >> line;

	while (line[i] != '\0')
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			temp = 0;
			
			while (line[i] >= '0' && line[i] <= '9')
			{
				temp *= 10;
				temp += (line[i] - '0');
				i++;
			}
			
			if (mState == false)
			{
				result += temp;
			}
			else
			{
				result -= temp;
			}
		}
		else
		{
			if (line[i] == '-')
			{
				mState = true;
			}

			i++;
		}
	}

	cout << result;

	return 0;
}