#include <iostream>
#include <cmath>

using namespace std;

/*
���� : 2110
-�ϳ���ž ����

���� ������ �־����� �̵� Ƚ���� ��θ� ����ض�.
*/

void hanoi(int start, int via, int end, int n)
{
	if (n == 1)
	{
		cout << start << " " << end << "\n";
	}
	else
	{
		hanoi(start, end, via, n - 1);
		cout << start << " " << end << "\n";
		hanoi(via, start, end, n - 1);
	}
}

int main()
{
	int n;
	cin >> n;

	cout << int(pow(2, n)) - 1 << "\n";

	hanoi(1, 2, 3, n);	

	return 0;
}