#include <iostream>
using namespace std;
//공넣기

int main()
{
	int N = 0;//바구니갯수
	int M = 0;//몇 번 공을 넣을건지;
	cin >> N >> M;
	int* basket = new int[N] {0};
	int i = 0;
	int j = 0;
	int k = 0;

	
	for (int p = 0; p < M; p++)
	{
		cin >> i >> j >> k;
		for (int l = i-1; l < j; l++)
		{
			basket[l] = k;
		}
	}
	for (int r = 0; r < N; r++)
	{
		cout << basket[r]<<" ";
	}

	delete[] basket;
}
