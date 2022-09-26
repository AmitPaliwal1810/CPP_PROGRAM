/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.


Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> initial = {1, 2, 3, 3, 4, 5, 4, 2, 1};

    sort(initial.begin(), initial.end());

    vector<int> ans;

    for (int i = 0; i < initial.size() - 1; i++)
    {

        if (i == initial.size() - 1)
        {
            break;
        }

        if (initial[i] == initial[i + 1])
        {
            ans.push_back(initial[i]);
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
}