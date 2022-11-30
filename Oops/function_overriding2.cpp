#include<bits/stdc++.h>

using namespace std;

class A
{
    public:

    void print()
    {
        cout<<"Parent class printing: "<<endl;
    }
};

class B : public A
{
    public:

    void print()
    {
        cout<<" Child class printing : "<<endl;
    }
};

int main()
{
    B b;
    b.print();
    b.A::print(); //scope resolution to not override parent func
    return 0;
}