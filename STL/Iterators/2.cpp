/* Iteratior */

/*
There is a difference between iterator  it+1 and ++it -> we use ++it.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, string>> v = {{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}};

    vector<pair<int, string>>::iterator it;

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl;
    }
}