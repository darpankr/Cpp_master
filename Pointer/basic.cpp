#include<iostream>

using namespace std;

int main()
{
    int k = 10;
    int *p;
    p = &k;
    cout<<"value of k : "<<k<<endl;
    cout<<"value of addres k : "<<&k<<endl;
    cout<<"value of p : "<<p<<endl;
    cout<<"value of *p : "<<*p<<endl;
    return 0;
}