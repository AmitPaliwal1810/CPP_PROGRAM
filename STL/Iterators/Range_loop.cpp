/* Iteratior --> Range base loop */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, string>> v = {{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}};

    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }
}
