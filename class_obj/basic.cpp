#include<iostream>

using namespace std;

class A
{
    public:
    void show(int i = 1);
};

void A :: show(int p)
{
    for(int i=0; i< p; i++)
    {
        cout<<"hello\n";
    }
}

int main()
{
    A a1;
    a1.show();
    cout<<"space\n";
    a1.show(5);
    return 0;
}