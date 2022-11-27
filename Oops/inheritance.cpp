#include<bits/stdc++.h>

using namespace std;

class A
{
    public:

    int x;

    protected:

    int y;

    private:

    int z;
};

class B : public A
{
    //x is punlic
    //y is protected
    //z not accessible 
};

class C : protected A
{
    //x become protected
    //y stays protevted
    //z not accessible
};

class D : private A
{
    //x and y become priavte
    //z not access
};

int main()
{
    return 0;
}