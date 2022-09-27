// sort 0's and 1's

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1};

    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {

        while (v[i] == 0 && i < j)
        {
            i++;
        }
        while (v[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    for (auto p : v)
    {
        cout << p << " ";
    }
}