#include<bits/stdc++.h>

using namespace std;

int main()
{
    return 0;

    int ar[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int s = sizeof(ar)/sizeof(ar[0]);
    int sum;
    int m = INT_MIN;
    for(int i = 0; i< s; i++)
    {
        sum = 0;
        for(int j= 0; j<s;j++)
        {
            sum += ar[j];
            m = max(m, sum);
        }
    }
    cout<<"hi"<<endl;
    cout<<"MAX: "<<m;
}