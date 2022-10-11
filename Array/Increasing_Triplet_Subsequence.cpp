/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

Example 1:

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

*/

/*

in this is question we have to find a sequence at which i < j < k.

example for array a = [2,1,5,0,4,6]

i = 2 ;
j = 5 ;
k = 6 ;

i < j < k


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {5, 4, 3, 2, 1};
    int first = INT_MAX;
    int second = INT_MAX;
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= first)
        {
            first = v[i];
        }
        else if (v[i] <= second)
        {
            second = v[i];
        }
        else
            flag = true;
    }
    cout << flag;
}
