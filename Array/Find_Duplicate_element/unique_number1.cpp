/* find duplicate number(element) in an array.
 you have an array which has all the unique number and one number is duplicate.
 you have to find that number.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 3, 4};

    int ans = 0;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++)
    {
        ans = ans ^ i;
    }

    cout << ans << " ";
}