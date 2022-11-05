#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

class Queue
{
    public:
    stack<int> s;

    int size;

    Queue(){size = 0;}

    void push(int i)
    {
        s.push(i);
    }

    int pop()
    {
        // s.pop();
        if(s.size() == 0) {cout<<"Queue is empty\n"; return 0;}
        int a  = s.top();
        s.pop();
        if(!s.empty())
        {
            int b = pop();
            s.push(a);
            return b;
        }
        else
        {
            cout<<"poping: "<<a<<endl; size--;
        }
        // s.pop();
        return a;
    }

    int front()
    {
        if(s.size() == 0) {cout<<"Queue is empty\n";}

        int b,a = s.top();
        s.pop();
        if(!s.empty())
        {
            b = front();
            s.push(a);
            return b;
        }
        else
        {
            b=a;
        }
        s.push(a);
        return a;

    }

    void show()
    {
        stack<int> s1 = s;
        while(!s1.empty())
        {
            int a = s1.top();
            cout<<a<<" - ";
            s1.pop();
        }
    }


};

int main()
{
    Queue q;

    q.push(1);q.push(2),q.push(3),q.push(4);
    q.show();
    q.pop();
    q.show();
    cout<<"The front: "<<q.front()<<endl;

    q.push(5);
    q.push(6);
    q.pop();
    q.show();
    cout<<"The front: "<<q.front();
    return 0;
}