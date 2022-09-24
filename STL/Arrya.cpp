// STL array.

#include <iostream>
#include <array>
using namespace std;

int main()
{

    // array<int , size> array_name = {elements}

    array<int, 4> a = {1, 2, 3, 4};

    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << endl;
    }

    // .at(index) function to find any index_element
    // .front() function give you the value at position 0
    // .back() function give you the value at position end.

    cout << "element at 2nd -" << a.at(2) << endl;

    cout << "element at 0th index - " << a.front() << endl
         << "element at (n-1)th index - " << a.back() << endl;
}