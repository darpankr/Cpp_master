#include<bits/stdc++.h>

using namespace std;

//  0   1   2   3   4   5

//  1   2   3   4   5   6

/*

1   (1, 2, 3, 4, 5,6) => (3, 4, 5, 6) => (5,6) =>sum(1, 3, 5)
                                                =>sum(1, 2, 6)


*/

void fun(int ar[], int q, int n, int sum)
{
    if(q<n)
    {
        // cout<<ar[q]<<", ";
        // sum += ar[q];
        for(int i = q; i<n; i++)
        {
            sum += ar[i];
            int k = sum;
            fun(ar, i+2, n, sum);
            sum = k;
        }
        // cout<<endl;
    }
    else
    {
        cout<<"sum: "<<sum<<endl;
        return;
    }
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int q =0;
    int sum = 0;
    fun(ar, q, n, sum);
    return 0;
}