// Pair Sum

/*
https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // brute force approach.

    vector<int> v = {1, 2, 3, 4, 5};
    int target = 5;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {

        for (int j = i + 1; j < v.size(); j++)
        {

            if (v[i] + v[j] == target)
            {

                cout << v[i] << " " << v[j] << endl;
            }
        }
    }
}