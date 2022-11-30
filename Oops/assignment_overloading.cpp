#include<bits/stdc++.h>


using namespace std;

class A
{
    private:
    int km;
    int m;

    public:

    A()
    {
        km = 0;
        m  = 0;
    }

    A(int kms, int ms)
    {
        km = kms;
        m = ms;
    }

    void operator = (const A &l)
    {
        km = l.km;
        m = l.m;
    }

    void display()
    {
        cout<<km<<" kms "<<m<<" m "<<endl;
    }
};

int main()
{
    A a1(10, 100);
    A a2(20, 200);

    cout<<"Obj1 length: ";
    a1.display();
    cout<<"Obj2 length: ";
    a2.display();

    a1 = a2;

    cout<<"New value: ";
    a1.display();
    return 0;
}