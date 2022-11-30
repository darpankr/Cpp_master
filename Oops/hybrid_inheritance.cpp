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

class B : public A
{
    public:
    void m2()
    {
        cout<<"B is parent"<<endl;
    }
};

class C : public A
{
    public:
    void m3()
    {
        cout<<"C is child"<<endl;
    }
};
class D : public B
{
    public:
    void m4()
    {
        cout<<"Cladd D"<<endl;
    }
};

class E : public C
{
    public:
    void m5()
    {
        cout<<"class E"<<endl;
    }
};

int main()
{
    C c;
    c.m1();
    B b;
    b.m1();
    E e;
    e.m1();
    e.m3();
    D d;
    d.m2();
    d.m1();
    return 0;
}