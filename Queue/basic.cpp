#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>

#define max_size 10

using namespace std;

class Queue
{
    private:
    int rear, front;
    int item , i;
    int arr_queue[max_size];

    public:

    Queue()
    {
        rear = -1;
        front = -1;
    }

    void insert()
    {
        if(front == rear == -1)
        {
            front  = rear = 0;
            cout<<"Enter the item: ";
            cin>>item;
            arr_queue[rear] = item;
        }
        else if(rear == max_size -1)
        {
            cout<<"Queue Overflow\n";
        }
        else
        {
            cout<<"Enter the item: ";
            cin>>item;
            arr_queue[++rear] = item;
        }
    }

    void deleteq()
    {
        if(front == rear == -1)
        {
            cout<<"Queue underflow\n";
        }
        else if(front  == rear)
        {
            front  = rear = -1;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if(rear == front == -1)
        {
            cout<<"No element is present: \n";
        }
        else if(rear == front)
        {
            cout<<arr_queue[front];
        }
        else
        {
            int i = front;
            while(i <= rear)
            {
                cout<<"Queue["<<i<<"] = "<<arr_queue[i]<<endl;
                i++;
            }
        }
    }
};

int main()
{
    int choice, p=1;

    Queue q;
    do
    {
        cout<<"Queue Main Menu: \n";
        cout<<setw(6)<<"1.Insert\n"<<setw(6)<<"2.Delete\n"<<setw(6)<<"3.Display\n"<<endl;
        cout<<"Enter the choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                q.insert();
                break;
            case 2:
                q.deleteq();
                break;
            case 3:
                q.display();
                break;
            default:
                p = 0;
                break;
        }
        /* code */
    } while (p);
    
    return 0;
}