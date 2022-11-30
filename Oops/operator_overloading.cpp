#include<bits/stdc++.h>

using namespace std;

class Test
{
    private:

    int cnt;

    public:
    Test() : cnt(101)
    {
        //constructor
    }

    void operator ++()
    {
        cnt = cnt+100;
    }

    void display()
    {
        cout<<"Count : "<<cnt<<endl;
    }
};


int main()
{
    Test t;
    ++t;
    t.display();
    // t++;
    // t.display();
    return 0;
}