#include <iostream>
using namespace std;
//바구니 뒤집기
int main()
{
	int N = 0;//바구니갯수
	int M = 0;//몇 번  역순으로 만들건지
	cin >> N >> M;
	int* basket = new int[N] {0};

	for (int i = 0; i < N; i++) {
		basket[i]=i+1;
	}
	for (int k = 0; k < M; k++){
		int i, j;
		int tump = 0;
		cin >> i >> j;
		
		tump = basket[j - 1];
		basket[j - 1] = basket[i - 1];
		basket[i - 1] = tump;
	}

	for (int i = 0; i < N; i++){
		cout << basket[i] << " ";
	}
}


