// binary search

/*

normally , mid value is define by,
mid = (start+end) / 2
but here we use mid = start + (end - start ) / 2.

because, since start is int ans also end, the limit of int is 2^31 and the sum of 2^31 and 2^31 will make a big value, that time our will give error ,
so we use optimized approach start + end will exceed the limit.

*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {

            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return (-1);
}

int main()
{

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 6, 9, 12, 15};

    int index = binarySearch(even, 6, 90);

    cout << "your item is found at position " << index << endl;

    return 0;
}