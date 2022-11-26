#include<bits/stdc++.h>

using namespace std;

//  0   1   2   3   4

// bool cmp(int a, int b)
// {
//     return (a<b);
// }

int main()
{
    int ar[] = {1, 3, 7, 9, 11, 15, 8, 6};
    int sum = 5;
    int cal;
    int s = sizeof(ar)/sizeof(ar[0]);
    for(int i = 0; i<s; i++)
    {
        cal = 0;
        for(int j = i; j<s; j++)
        {
            cal += ar[j];
            if(cal == sum)
            {
                cout<<i<<" - "<<j;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}