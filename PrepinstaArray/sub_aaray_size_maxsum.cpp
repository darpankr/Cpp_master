#include<bits/stdc++.h>

using namespace std;

//  0   1   2   3   4

// bool cmp(int a, int b)
// {
//     return (a<b);
// }

int main()
{
    // kadanes algo
    int ar[] = {-2, -3, -1, 4, -2, 1, 5, -3};
    int s = sizeof(ar)/sizeof(ar[0]);
    int m = INT_MIN, temp = 0, f, l;
    for(int i = 0; i<s; i++)
    {
        temp = temp + ar[i];
        if(m<temp)
        {
            m = temp;
            l = i;
        }
        if(temp<0)
        {
            temp = 0;
            f = i+1;
        }
    }
    cout<<f<<" - "<<l<<endl;
    cout<<m<<endl;
    return 0;
}

// int main()
// {
//     int ar[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int s = sizeof(ar)/sizeof(ar[0]);
//     int sum, m = INT_MIN;
//     int f, l;
//     for(int i = 0; i<s; i++)
//     {
//         sum = 0;
//         for(int j = i; j<s; j++)
//         {
//             sum += ar[j];
//             // m = max(m, sum, cmp);
//             if(sum>m)
//             {
//                 m = sum;
//                 f = i; 
//                 l = j;
//             }
//         }
//     }
//     cout<<f<<" - "<<l;
//     return 0;
// }