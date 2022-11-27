#include<bits/stdc++.h>

using namespace std;

//ENCAPTUALTING DATA AND FUNCTION TOGRTHER

class Rect
{
    public:

    int l;
    int b;

    int area()
    {
        return l*b;
    }
};

int main()
{
    Rect obj;
    obj.l = 10;
    obj.b = 5;

    cout<<"Area: "<<obj.area();
    return 0;
}