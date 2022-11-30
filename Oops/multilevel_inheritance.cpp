#include<bits/stdc++.h>

using namespace std;

class Grand
{
    public:

    void gdprop()
    {
        cout<<"Grand _ prop"<<endl;
    }
};

class Parent : public Grand
{
    public:

    void pprop()
    {
        cout<<"Parent prop"<<endl;
    }
};

class Child : public Parent
{
    public:

    void cprop()
    {
        cout<<"child prop"<<endl;
    }
};

int main()
{
    Child c;
    c.gdprop();
    c.pprop();
    Parent p;
    p.gdprop();
    return 0;
}