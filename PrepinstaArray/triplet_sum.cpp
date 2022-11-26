#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[] = {-2, -3, -1, 4, -2, 1, 5, -3};
    int s  = sizeof(ar)/sizeof(ar[0]);
    int k = 10;
    int temp = 0, sum = INT_MIN;

    // FOR O(N3)
    for(int i = 0; i< s; i++)
    {
        for(int j = i+1; j<s; j++)
        {
            for(int l = j+1; l<s; l++)
            {
                sum = ar[i]+ar[j]+ar[l];
                if(sum == k)
                {
                    cout<<ar[i]<<" - "<<ar[j]<<" - "<<ar[l]<<endl;
                    return 0;
                }
            }

        }
    }

    // FOR O(N2)

    // for(int i = 0; i<s-2; i++)
    // {
    //     int l = i+1;
    //     int r = s-1;
    //     while(l<r)
    //     {
    //         int s = ar[i]+ar[l]+ar[r];
    //         if(s == k)
    //         {cout<<ar[i]<<" "<<ar[l]<<" "<<ar[r]<<endl;
    //         return 0;}
    //         else if(s<k)
    //         {
    //             l++;
    //         }
    //         else
    //         {
    //             r--;
    //         }
    //     }
    // }
    cout<<"No match"<<endl;
    return 0;
}