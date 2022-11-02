#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"size: "<<q.size()<<endl;
    return 0;
}