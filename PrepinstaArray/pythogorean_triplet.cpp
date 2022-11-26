#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[] = {3,4,6,5,7,8, 9, 10};
    int s = sizeof(ar)/sizeof(ar[0]);

    for(int i = 0; i< s-2; i++)
    {
        for(int j = i+1; j<s-1; j++)
        {
            for(int k = j+1; k<s; k++)
            {
                if((ar[i]*ar[i] + ar[j]*ar[j]) == ar[k]*ar[k])
                {
                    cout<<ar[i]<<", "<<ar[j]<<", "<<ar[k]<<endl;
                    // return 0;
                }
            }
        }
    }
    return 0;
}