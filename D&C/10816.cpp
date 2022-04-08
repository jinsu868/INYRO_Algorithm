#include <iostream>
#include <algorithm>

using namespace std;

/*
문제 : 10816

숫자 카드는 정수 하나가 적혀져 있는 카드이다.
상근이는 숫자 카드 N개를 가지고 있다.
정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.
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

