#include<bits/stdc++.h>

using namespace std;

class Rect
{
    private:

    int len;
    int bred;

    public:

    void setlLen(int l)
    {
        len = l;
    }

    void setBred(int b)
    {
        bred = b;
    }

    int getLen()
    {
        return len;
    }

    int getBred()
    {
        return bred;
    }

    int area()
    {
        return len*bred;
    }
};

int main()
{
    Rect obj;

    //PRIVATE DIRECTLY CANT ACCESS
    // obj.len = 10;
    // obj.bred = 8;
    int l, b;
    cout<<"Enter the len: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;

    obj.setlLen(l);
    obj.setBred(b);

    cout<<"Length: "<<obj.getLen()<<endl;
    cout<<"Breadth: "<<obj.getBred()<<endl;

    cout<<"Area: "<<obj.area()<<endl;
    return 0;
}