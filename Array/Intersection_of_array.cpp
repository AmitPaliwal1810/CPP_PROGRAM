/*
https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

find out the intersection of 2 array.


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {1, 2, 2, 2, 3, 3, 4};
    vector<int> b = {2, 2, 3, 3, 4};

    vector<int> ans;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     int element = a[i];

    //     for (int j = 0; j < b.size(); j++)
    //     {

    //         if (element == b[j])
    //         {
    //             ans.push_back(b[j]);
    //             b[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }

    // optimized solution. (2 pointer approach)

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}

