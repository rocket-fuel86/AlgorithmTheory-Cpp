#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
	int arr[N] = { 5, -3, 8, 0, 12, -7, 4, 6, -2, 9 };
	int sum = 0;

	for (int i = N / 2; i < N; i++)
	{
		if (arr[i] < 0)
		{
			sum += arr[i];
		}
	}

	cout << sum << endl;
}