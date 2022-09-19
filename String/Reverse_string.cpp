#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool flag = true;

    int size_of_string = str.size();

    for (int i = 0, j = size_of_string - 1; i < size_of_string, j != 0; i++, j--)
    {

        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "Is Palandrom" : " Is not Palandrom ") << endl;
}