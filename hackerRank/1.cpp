/*
Problem
Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.For each given test case tell whether the given sequence will be liked by Jiya.

INPUT FORMAT-

First line constains t number of test cases.

Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

OUTPUT FORMAT -

Print "YES" or "NO",whether Jiya likes the sequence or not.

CONSTRAINTS-

1≤t≤100

1≤n≤15

1≤Ai≤10, for all i



HINT - Least significant digit of a number can be obtained by taking the number % 10.

Mind the case of output to be printed.
Sample Input
2
5
2 2 2 2 2
4
2 2 2 2

Sample Output
YES
NO
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int res = 1;

        for (int i = 0; i < n; ++i)
        {
            int val;
            cin >> val;
            res *= val;
        }

        int digit = res % 10;

        if (digit == 2 || digit == 5 || digit == 3)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
}