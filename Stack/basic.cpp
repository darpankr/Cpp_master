#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>

#define max_size 10

using namespace std;

class Stack
{
    private:

    int item , i;
    int top;
    int arr_stack[max_size];

    public:

    Stack();
    void push();
    void pop();
    void display();
};

Stack :: Stack()
{
    top = -1;
}

void Stack :: push()
{
    if(top == max_size)
    {
        cout<<"Stack is full\n";
    }
    else
    {
        cout<<"Enter the value: ";
        cin>>item;
        top++;
        arr_stack[top] = item;
        cout<<"Item inserted at position "<<top+1<<endl;
    }
}

void Stack :: pop()
{
    if(top == -1)
    {
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"Item ti pop out is "<<arr_stack[top]<<endl;
        top--;
    }
}

void Stack :: display()
{
    if(top == -1)
    {
        cout<<"stack is empty\n";
    }
    else
    {
        int i = 0;
        while(i<=top)
        {
            cout<<"stack["<<i<<"] = "<<arr_stack[i]<<endl;
            i++;
        }
    }
}

int main()
{
    int choice, exit_p = 1;
    Stack obj;
    cout<<"Starck operation\n";

    do
    {
        cout<<"Stack Main menu\n";
        cout<<setw(6)<<"1.Push\n"<<setw(6)<<"2.Pop\n"<<setw(6)<<"3.Display\n"<<setw(6)<<"4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                obj.push();
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            default:
                exit_p = 0;
                break;
        }
    }while(exit_p);
    return 0;
}