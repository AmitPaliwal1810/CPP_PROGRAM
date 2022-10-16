#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &v)
{

    for (int i = 0; i < v.size() - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }

        swap(v[minIndex], v[i]);
    }
}

int main()
{

    vector<int> v = {64, 25, 12, 22, 11};

    sortArray(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
/*

use case : 

small size array and memory use.

*/