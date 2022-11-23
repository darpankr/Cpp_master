#include<bits/stdc++.h>

using namespace std;


int main()
{
    array<int, 5> ar = {1, 2, 3, 4, 5};
    int k = 3;
    int i = 0;
    while(i!=5)
    {
        cout<<ar[(k-1)%5]<<",";
        k++;
        i++;
    }
    return 0;
}