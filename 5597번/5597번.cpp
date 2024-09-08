#include <iostream>
using namespace std;
//과제안내신분
int main()
{
	int student[30] = { 0 };
	int count[2] = { 0 };
	for (int i = 0; i < 28; i++)
	{
		cin >> student[i];
	}
	for (int i = 1; i < 31; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (student[j] != i )
			{
				cout << i << endl;
			}
		}
	}
}
