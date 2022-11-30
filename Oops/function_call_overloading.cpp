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

    A operator () (int x, int y, int z)
    {
        A l;
        l.km = x + y + 10;
        l.m = y + z+ 10;

        return l;
    }

    void display()
    {
        cout<<km<<" kms "<<m<<" m "<<endl;
    }
};

int main()
{
    A a1(1, 2);
    cout<<"First: ";
    a1.display();

    A a2 = a1(4, 5, 6);
    cout<<"second: ";
    a2.display();
    return 0;
}