#include <iostream>
using namespace std;
//공바꾸기
int main()
{
	int N = 0;//바구니갯수
	int M = 0;//몇 번 공을 넣을건지;
	cin >> N >> M;
	int* basket = new int[N] {0};

	int tump = 0;

	for (int i = 0; i < N; i++)
	{
		basket[i] = i+1;
	}

	for (int p = 0; p < M; p++)
	{
		int i, j;
		cin >> i >> j ;
		tump = basket[j - 1];
		basket[j - 1] = basket[i - 1];
		basket[i - 1] = tump;
	}
	for (int r = 0; r < N; r++)
	{
		cout << basket[r] << " ";
	}

	delete[] basket;
}

