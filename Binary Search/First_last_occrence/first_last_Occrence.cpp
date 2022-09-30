/*
Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

*/
#include <bits/stdc++.h>
using namespace std;

int firstOccrence(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left me jao

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOccrence(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            // left me jao

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};

    cout << "firstOccrence of 3 is " << firstOccrence(even, 5, 3) << " ";
    cout << "lastOccrence of 3 is " << lastOccrence(even, 5, 3) << " ";

    return 0;
}