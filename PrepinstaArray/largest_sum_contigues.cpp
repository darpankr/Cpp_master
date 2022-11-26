#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return (b>a);
}

int main()
{

    int ar[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int s = sizeof(ar)/sizeof(ar[0]);
    int sum;
    int m = INT_MIN;
    for(int i = 0; i< s; i++)
    {
        sum = 0;
        for(int j= i; j<s;j++)
        {
            sum += ar[j];
            m = max(m, sum, cmp);
        }
    }
    cout<<"hi"<<endl;
    cout<<"MAX: "<<m;
    return 0;
}