#include<bits/stdc++.h>

using namespace std;

class A
{
    private:
    int x;

    public:
    A(int x1 = 0)
    {
        x = x1;
    }

    A operator + (A const &obj)
    {
        A temp;

        temp.x = x + obj.x;
        return temp;
    }

    void print()
    {
        cout<<x<<endl;
    }
};


int main()
{
    A a1(10), a2(20);
    A a3 = a1 + a2;
    a3.print();
    return 0;
}