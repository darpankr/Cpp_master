#include<iostream>
// #include <bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class Stack
{
    public:
    int top;
    int maxsize;
    int *array;

    Stack(int max)
    {
        top = -1;
        maxsize = max;
        array = new int[max];
    }

    int isfull()
    {
        if(top == maxsize - 1)
        {
            cout<<"stack is full\n";
        }
        return top = maxsize - 1;
    }

    int isempty()
    {
        if(top == -1)
        {
            cout<<"stack is empty\n";
        }
        return top == -1;
    }

    int pop()
    {
        if(isempty())
        {
            return INT_MIN;
        }
        return array[top--];
    }

    int push(int item)
    {
        if(isfull()) return;
        array[++top] = item;
    }

    int peek()
    {
        if(isempty()) return INT_MIN;
        return array[top];
    }
};

int main()
{
    Stack stack(6);
    stack.push(5);
    stack.push(10);
    stack.push(15);
    int flag = 1;

    while(flag)
    {
        if(!stack.isempty())
        {
            cout<<"We have popped out "<<stack.pop();
        }
        else
        {
            flag = 0;
        }
    }

    return 0;
}