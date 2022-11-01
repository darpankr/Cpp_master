#include<iostream>

using namespace std;

class A
{
    public:
    void show(int i =2);
    void inp(int j);
};

void A :: show(int p)
{
    for(int i = 0; i< p; i++)
    {
        cout<<"darpan"<<endl;
    }
}

int main()
{
    A a1;
    a1.show();
    cout<<"space out";
    a1.show(5);
    return 0;
}