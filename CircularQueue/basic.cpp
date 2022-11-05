#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define max 5

using namespace std;

class Cqueue
{
    public:
    int cqueue[max];
    int rear, front;

    Cqueue() {rear = -1, front = -1;}

    void enqueue(int i)
    {
        if(rear == -1)
        {
            rear = front = 0;
            cqueue[rear] = i;
        }
        else if((front == 0 && rear == max-1) || (front == rear+1))//front == (rear + 1) % max
        {
            cout<<"Cqueue is full\n";
        }
        else
        {
            rear = (rear + 1) % max;
            cqueue[rear] = i;
        }
    }

    void dequeue()
    {
        int ele;
        if((rear == front) & (rear != -1))
        {
            ele = cqueue[front];
            rear = front = -1;
        }
        else if(rear == front == -1)
        {
            cout<<"Cqueue is empty\n";
        }
        else{
            ele = cqueue[front];
            front = (front + 1)%max;

        }
        cout<<"The dequeue ele Is : "<<ele<<endl;
    }

    void show()
    {
        int i;
        i = front;
        // cout<<"darpan\n";

        if(rear == -1)
        {
            cout<<"empty\n";
        }
        else if(rear == front)
        {
            cout<<cqueue[front];
        }
        else
        {
            while(i!=rear){
            cout<<cqueue[i]<<" ";
            i = (i+1)%max;
            }
            cout<<cqueue[rear]<<endl;
        }

    }

};

int main()
{
    Cqueue q;
    q.enqueue(1), q.enqueue(2), q.enqueue(3), q.enqueue(4);
    q.show();
    q.dequeue();
    q.show();
    q.enqueue(5), q.enqueue(6), q.enqueue(7);
    q.show();
    q.dequeue(), q.dequeue();
    q.show();
    return 0;
}