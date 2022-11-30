#include<bits/stdc++.h>

using namespace std;

class A
{
    public:
    void fun()
    {
        cout<<"NO para"<<endl;
    }

    void fun(int a)
    {
        cout<<"One para "<<a<<endl;
    }

    void fun(int a, int b)
    {
        cout<<"Two para "<<a<<" "<<b<<endl;
    }
};

int main()
{
    A a;
    a.fun();
    a.fun(10);
    a.fun(2, 5);
    return 0;
}