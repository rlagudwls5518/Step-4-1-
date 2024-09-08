#include <iostream>
using namespace std;
//나머지
//나머지는 나누려는 수 에서 하나뺀만큼읠 나머지가 나올수 있다.
//0~41까지 나머지가 나올 수 있으니 이 나머지를 인덱스로 만든 배열로 카운트를 한다.
int main()
{
    int num = 0;
    int array[42] = { 0 };
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        array[num % 42]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (array[i] > 0)
        {
            count++;
        }
    }
    cout << count;
}


