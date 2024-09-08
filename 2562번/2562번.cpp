 #include <iostream>
using namespace std;
//최대값
int main()
{
    int arr[9];
    int max = 0;
    int count;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = i;
        }
    }


    cout << max << endl << count+1;
}

