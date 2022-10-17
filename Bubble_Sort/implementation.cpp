#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {10, 12, 52, 1, 26, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; ++i)
    {

        for (int j = 0; j < size - i; ++j)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}