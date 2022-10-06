#include <bits/stdc++.h>
using namespace std;

int findSquareRoot(int num)
{

    int s = 0;
    int e = num;
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {

        if (mid * mid > num)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int num = 81;

    int ans = findSquareRoot(num);

    cout << ans;
}