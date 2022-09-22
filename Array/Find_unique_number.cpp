#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[7] = {1, 2, 1, 2, 5, 6, 6};

    int sum = 0;

    for (int i = 0; i < 7; ++i)
    {

        sum = sum ^ arr[i];
    }

    cout << sum << " " << endl;
}