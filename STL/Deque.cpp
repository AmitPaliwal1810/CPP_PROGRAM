// STL Deque

/*
double ended queue has the property to insert and delete the element at both side.
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_front(3);

    for (int i : d)
    {
        cout << i << " ";
    }

    cout << endl;

    // how to erase element at any specific position.

    d.erase(d.begin(), d.begin() + 1);
}

/*

function

1. .at(index)
2. .push_front(value)
3. .push_back(value)
4. .pop_front()
5. .pop_back()
6. .empty()
7. .erase( starting_index , ending_index )
8. .front()
9. .back()
*/