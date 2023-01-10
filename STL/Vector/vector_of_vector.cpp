/* Vector of vector */

/*
it is behaving like a dynamic 2D array, which has row and column both dynamic.

N is just an input value that tell you how many time you will take input.
and we also declare a temporary array, which will take the input and then we can put it into many vector because as we did in array of vector program, we enter the values inside v[i] but here we don't have any size for main vector.
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
    vector<vector<int>> v;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
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