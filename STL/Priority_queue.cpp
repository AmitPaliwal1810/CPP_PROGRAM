// STL Priority_Queue.

/*

Priority queues are a type of container adapters, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue and elements are in nonincreasing order (hence we can see that each element of the queue has a priority {fixed order}). However in C++ STL, by default, the top element is always the greatest element. We can also change it to the smallest element at the top. Priority queues are built on the top to the max heap and uses array or vector as an internal structure.

*/

#include <iostream>
#include <queue>
using namespace std;

void showpq(priority_queue<int> gq)
{

    /*
    max heap ( means : isme se jab bhi hum ko element bahar nikalenge vo un sab elements se greater ho ga jo uske under hoga. )

    priority_queue<int> maxi;

    min heap ( means : isme se jab bhi hum ko element bahar nikalenge vo un sab elements se lowest ho ga jo uske under hoga. )

    priority_queue<int , vactor<int> , greater<int> > mini;


    */

    priority_queue<int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    priority_queue<int> p;
    p.push(10);
    p.push(30);
    p.push(20);
    p.push(5);
    p.push(1);

    cout << "The priority queue p is : ";
    showpq(p);

    cout << "\np.size() : " << p.size();
    cout << "\np.top() : " << p.top();

    cout << "\np.pop() : ";
    p.pop();
    showpq(p);

    return 0;
}

/*


The functions associated with stack are:
1. priority_queue::empty() Returns whether the queue is empty.
2. priority_queue::size()  Returns the size of the queue.
3. priority_queue::top()   Returns a reference to the topmost element of the queue.
4. priority_queue::push()  Adds the element ‘g’ at the end of the queue.
5. priority_queue::pop()   Deletes the first element of the queue.
6. priority_queue::swap()  Used to swap the contents of two queues provided the queues must be of the same type, although sizes may differ.
7. priority_queue::emplace()   Used to insert a new element into the priority queue container.
8. priority_queue value_type   Represents the type of object stored as an element in a priority_queue. It acts as a synonym for the template parameter.
*/