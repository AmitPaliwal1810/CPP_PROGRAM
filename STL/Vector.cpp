// STL vector.

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    cout << "capacity of a - " << a.capacity() << endl;

    // push_back()
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    for (int i = 0; i < a.size(); i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;

    // how to give the size of vector and fill it will any element.
    vector<int> v(5, 1); // 5 is the size and 1 is the value.

    for (int i = 0; i < v.size(); i++)
    {

        cout << "vector v element " << v[i] << endl;
    }

    // how to copy the vector in another vector

    vector<int> copy_vector(v);
}

/*

functions

1. .size() - to find the size
2. .front() , .back() - to find the element at position 0 and n-1
3. .push_back(value) -  to push the element
4. .pop_back() - to pop the element from n-1th position
5. .clear() - to clear the vector
6. .capacity() - to find the capacity
7. .front()
8. .back()

*/