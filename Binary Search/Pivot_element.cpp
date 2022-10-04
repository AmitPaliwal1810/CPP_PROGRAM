#include <bits/stdc++.h>
using namespace std;

int findPivotElement(vector<int> v)
{

    int s = 0, e = v.size();
    int mid = s + (e - s) / 2;

    for (int i = 0; i < v.size(); ++i)
    {

        if (v[mid] >= v[0])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }

    return v[mid];
}

int main()
{

    vector<int> arr = {7, 9, 1, 2, 3};

    int pivotElement = findPivotElement(arr);

    cout << pivotElement << " ";
}