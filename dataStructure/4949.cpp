#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	while(true)
	{
		string line;
		stack<char> s;
		bool flag = true;

		getline(cin, line);

		if (line.length() == 1 && line[0] == '.')
		{
			break;
		}

		flag = true;

		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] == '(' || line[i] == '[')
			{
				s.push(line[i]);
			}
			else if (line[i] == ']')
			{
				if (s.empty() || s.top() == '(')
				{
					flag = false;
					break;
				}
				else
				{
					s.pop();
				}
			}
			else if (line[i] == ')')
			{
				if (s.empty() || s.top() == '[')
				{
					flag = false;
					break;
				}
				else
				{
					s.pop();
				}
			}
		}

		if (flag == true && s.empty())
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	} 


	return 0;
}