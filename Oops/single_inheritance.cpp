#include<bits/stdc++.h>

using namespace std;

class Parent
{
    public:
    void parent_pro()
    {
        cout<<"A + B"<<endl;
    }
    int p  =10;
};

class Child : public Parent
{
    public:
    void child_pro()
    {
        cout<<"Flat v"<<endl;
    }
};

int main()
{
    Child c;
    c.child_pro();
    c.parent_pro();
    Parent p;
    p.parent_pro();
    cout<<c.p;
    return 0;
}