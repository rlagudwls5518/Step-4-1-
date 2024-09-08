#include <iostream>
using namespace std;
//개수세기
int main()
{
    int N = 0;
    int number = 0;
    int count = 0;
    cin >> N;

   int* arr = new int[N];
   for (int i = 0; i < N; i++)
   {
       cin >> arr[i];
   }

   cin >> number;
   for (int i = 0; i < N; i++)
   {
       if (arr[i] == number)
       {
           count++;
       }
   }

   cout << count;
   delete[] arr;
}

