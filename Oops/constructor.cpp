#include<bits/stdc++.h>


using namespace std;

class Demo
{
    public:
    int i;

    Demo()  //Default constructor
    {
        i = 800;
    }

    Demo(int k)
    {
        i = k;
    }

};
int main()
{
    Demo d;
    cout<<d.i;
    return 0;
}