#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int t;
	stack<char> s;
	char str[51];

	cin >> t;

	while (t--)
	{
		int i = 0;
		bool valid = true;

		cin >> str;

		while (str[i] != '\0')
		{
			if (str[i] == ')')
			{
				if (s.empty())
				{
					valid = false;
					break;
				}
				else
				{
					s.pop();
					i++;
				}
			}
			else
			{
				s.push(str[i++]);
			}
		}

		if (valid && s.empty())
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}

		while (!s.empty())
		{
			s.pop();
		}
	}

	return 0;
}