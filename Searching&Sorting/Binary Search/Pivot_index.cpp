/*

724. Find Pivot Index

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.

Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.


*/

#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> v)
{

    int sum = 0;
    int left = 0;

    for (int i = 0; i < v.size(); ++i)
    {

        sum += v[i];
    }

    for (int i = 0; i < v.size(); ++i)
    {

        if (left == (sum - left - v[i]))
        {
            return i;
        }

        left += v[i];
    }

    return -1;
}

int main()
{

    vector<int> v = {1, 7, 3, 6, 5, 6};

    int pivotIndex = findPivot(v);

    cout << "pivotIndex is ---> " << pivotIndex << "";
}