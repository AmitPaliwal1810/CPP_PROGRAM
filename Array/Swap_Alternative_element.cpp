#include <bits/stdc++.h>
using namespace std;

void swap_Alternative_Element(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arr[7] = {1, 2, 8, 2, 6, 9, 10};

    swap_Alternative_Element(arr, 7);

    for (int i = 0; i < 7; ++i)
    {
        cout << arr[i] << ' ';
    }
}