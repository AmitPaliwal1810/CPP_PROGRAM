// STL Stack

#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop();
    stack.pop();

    while (!stack.empty())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
}

/*


The functions associated with stack are:
1. empty() – Returns whether the stack is empty – Time Complexity : O(1)
2. size() – Returns the size of the stack – Time Complexity : O(1)
3. top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
4. push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
5. pop() – Deletes the top most element of the stack – Time Complexity : O(1)

*/