#include<bits/stdc++.h>

using namespace std;

//  0   1   2   3   4

// bool cmp(int a, int b)
// {
//     return (a<b);
// }

int main()
{
    int ar[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int s = sizeof(ar)/sizeof(ar[0]);
    int m = INT_MIN;
    int temp = 0;
    for(int i = 0; i<s; i++)
    {
        temp = temp + ar[i];

        if(m<temp)
        {
            m = temp;
        }

        if(temp<0)
        {
            temp = 0;
        }
    }
    cout<<m<<endl;
    return 0;
}