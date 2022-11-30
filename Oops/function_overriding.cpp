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
    A a;

    B b;

    // A a1 = B();
    // a1.print();

    a.print();
    b.print();


    return 0;
}