// find min and max in an array.

#include <bits/stdc++.h>
using namespace std;

int findMini(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int findMaxi(int arr[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 5, 6, -7, -3, -1};

    cout << findMini(arr, 9) << endl;

    cout << findMaxi(arr, 9) << endl;
}