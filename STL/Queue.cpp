// STL Queue

#include <iostream>
#include <queue>

using namespace std;

// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue gquiz is : ";
    showq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);

    return 0;
}

/*
The functions associated with stack are:
1. queue::empty()  Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
2. queue::size()   Returns the size of the queue.
3. queue::swap()   Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
4. queue::emplace()    Insert a new element into the queue container, the new element is added to the end of the queue.
5. queue::front()  Returns a reference to the first element of the queue.
6. queue::back()   Returns a reference to the last element of the queue.
7. queue::push(g)  Adds the element ‘g’ at the end of the queue.
8. queue::pop()    Deletes the first element of the queue.
*/