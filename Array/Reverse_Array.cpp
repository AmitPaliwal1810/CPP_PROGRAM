#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void reserseArray(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    reserseArray(arr, 6);
    printArray(arr, 6);
}