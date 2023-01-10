/* Array of vector */

/*
it is behaving like a 2D array where number of row is fixed but number of column means size is dynamic.
*/

#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    cout << "size : " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
}

/*

i/p :

    3
    3
    1 2 3
    3
    3 4 5
    2
    1 2

o/p:

    size : 3
    1 2 3

    size : 3
    3 4 5

    size : 2
    1 2



*/