#include <iostream>
using namespace std;
//평균
float averageProgram(int a, int b, int c, int max);
int main()
{
	int subject1 = 0;
	int subject2 = 0;
	int subject3 = 0;
	int n = 0;
	int max = 0;

	cin >> n;
	cin >> subject1 >> subject2 >> subject3;
	max = subject1;

	if (max < subject2) {
		max = subject2;
	}

	if (max < subject3) {
		max = subject3;
	}
	float value = averageProgram(subject1, subject2, subject3, max);

	cout << value;

}

float averageProgram(int a, int b, int c, int max) {
	float value = 0;
	float a1 = a / max * 100;
	float b1 = b / max * 100;
	float c1 = c / max * 100;
	value = (a1 + b1 + c1) / 3;
	return value;
}

