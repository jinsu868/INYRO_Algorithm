#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int t;
	char str[1001];
	stack<char> s;

	cin >> t;
	cin.ignore();

	while (t--)
	{
		int i = 0;

		cin.getline(str, 1000);

		while (str[i] != '\0')
		{
			if (str[i] == ' ')
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}

				cout << " ";
			}
			else
			{
				s.push(str[i]);

			}
			i++;
		}

		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
		cout << '\n';
	}

	return 0;
}
