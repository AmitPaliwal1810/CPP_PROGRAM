#include <bits/stdc++.h>
using namespace std;

void reverseAtPosition(vector<int> &v, int pos)
{

    if (pos > v.size() || pos < 0)
    {
        return;
    }

    int s = pos;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    int pos;
    cin >> pos;

    reverseAtPosition(v, pos);

    for (int i = 0; i < v.size(); ++i)
    {
        /* code */
        cout << v[i] << " ";
    }
}