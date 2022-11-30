#include<bits/stdc++.h>

using namespace std;

class A
{
    public:
    void m1()
    {
        cout<<"A is parent"<<endl;
    }
};

class B
{
    public:
    void m2()
    {
        cout<<"B is parent"<<endl;
    }
};

class C : public A, public B
{
    public:
    void m3()
    {
        cout<<"C is child"<<endl;
    }
};

int main()
{
    C c;
    c.m1();
    c.m2();
    return 0;
}