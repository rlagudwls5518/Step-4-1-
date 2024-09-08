#include <iostream>
using namespace std;
// 최소, 최대
int main()
{
	int N = 0;//정수개수
	
	cin >> N;
	int* A = new int[N];
	int max = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int min = A[0];
	for (int i = 1; i < N; i++)
	{
		if (A[i] > max)max = A[i];
	}
	for (int i = 1; i < N; i++)
	{
		if (A[i] < min)min = A[i];
	}
	cout << min << " " << max;

	delete[] A;

}

