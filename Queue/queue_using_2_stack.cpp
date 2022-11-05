#include<iostream>
#include<stack>

using namespace std;

class Queue
{
    public:
    stack<int> s1, s2;

    void push(int i)
    {
        s1.push(i);
    }

    void pop()
    {
        if(s1.empty()) {cout<<"Queue i sempty\n";}
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int b  = s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        cout<<"Poping: "<<b<<endl;
    }

    void show()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty())
        {
            cout<<s2.top()<<"-";
            s1.push(s2.top());
            s2.pop();
        }
    }

    int front()
    {
        if(s1.empty()) {cout<<"Queue is empty:\n";}
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int b  = s2.top();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return b;
    }
};

int main()
{
    Queue q;

    q.push(1), q.push(2), q.push(3), q.push(4);
    q.show();
    cout<<"FRont: "<<q.front()<<endl;
    q.pop(), q.pop();
    q.push(5), q.push(6);
    q.show();
    cout<<"Front : "<<q.front()<<endl;
}