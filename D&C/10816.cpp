#include <iostream>
#include <algorithm>

using namespace std;

/*
���� : 10816

���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�.
����̴� ���� ī�� N���� ������ �ִ�.
���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� �� �� ������ �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/


int arr1[500000];
int arr2[500000];

int main()
{
	int N;
	int M;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr1[i];
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> arr2[i];
	}

	sort(arr1, arr1 + N);

	for (int i = 0; i < M; i++)
	{
		int key = arr2[i];

		cout << upper_bound(arr1, arr1 + N, key) - lower_bound(arr1, arr1 + N, key) << " ";
	}

	return 0;
}

