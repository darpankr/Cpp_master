#include<iostream>

using namespace std;

int main()
{
    int ar[] = {1, 2, 3, 4 ,5};
    cout<<"Elements are: "<<endl;
    for(int i = 0; i<sizeof(ar)/sizeof(int); i++)
    {
        cout<<"c["<<i<<"] = "<<ar[i]<<endl;
    }
    return 0;
}