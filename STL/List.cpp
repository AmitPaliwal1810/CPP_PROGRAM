// STL List

/*
STL list is implemented by using double linked list.
so it has the property to fill and pop the element from both side front and back.
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> l(5, 10);

    for (int i : l)
    {
        cout << i << " ";
    }

    cout << endl;

    l.pop_back();
    l.pop_front();

    for (int i : l)
    {
        cout << i << " ";
    }
}

/*

function

1. .push_front(value)
2. .push_back(value)
3. .pop_front()
4. .pop_back()

*/