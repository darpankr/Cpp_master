#include<iostream>
#include<stack>
using namespace std;

// push()	adds an element into the stack
// pop()	removes an element from the stack
// top()	returns the element at the top of the stack
// size()	returns the number of elements in the stack
// empty()	returns true if the stack is empty

void display(stack<int> s1)
{
    while(!s1.empty())
    {
        cout<<s1.top();
        cout<<"\n";
        s1.pop();
    }
    cout<<"\n";
}

int main()
{
    stack<int> stack1;

    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    cout<<stack1.top();

    cout<<"Elements in stack are: "<<endl;

    display(stack1);

    return 0;
}