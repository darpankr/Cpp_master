#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverse_queue_using_recur(queue<int> &q)
{
    int a = q.front();
    if(q.size() == 1) return;
    q.pop();
    reverse_queue_using_recur(q);
    q.push(a);
}

void reverse_queue_using_stack(queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

void show(queue<int> q)
{
    queue<int> q1;
    q1= q;
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<"\n";
}
int main()
{
    queue<int> q;
    q.push(1), q.push(2), q.push(3), q.push(4), q.push(5), q.push(6);

    cout<<"The Queue is : \n";
    show(q);
    
    reverse_queue_using_stack(q);
    cout<<"After the stack The Queue is : \n";
    show(q);

    reverse_queue_using_recur(q);
    cout<<"After the recursion The Queue is : \n";
    show(q);


    return 0;
}