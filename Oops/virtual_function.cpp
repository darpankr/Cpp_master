#include<bits/stdc++.h>

using namespace std;

class A
{
    public:

    void print()
    {
        cout<<"Parent class printing: "<<endl;
    }

    virtual void display()
    {
        cout<<"A "<<endl;
    }
};

class B : public A
{
    public:

    virtual void print()
    {
        cout<<" Child class printing : "<<endl;
    }

    void display()
    {
        cout<<"B "<<endl;
    }
};

int main()
{
    A a = B();
    a.print();
    a.display();

    A a1 = B();
    a1.print();
    a1.display();

    B b;
    b.print();
    b.display();
    return 0;
}