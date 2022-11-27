#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[] = {0, 1, 0, 1, 0, 1, 0, 0, 1};
    int s = sizeof(ar)/sizeof(ar[0]);

    int f = 0, l = 0, x, y, m = INT_MIN;
    int c = 0, z = 0, t = 0;
    for(int i = 0; i<s; i++)
    {
        if(ar[i] == 0)
        {
            z++;
            if(z>2)
            {
                t = f;
            }
            f = l;
            l = i;
        }

        if(z>2)
        {
            z--;
            c = l-t-1;
        }
        c++;
        if(m<c)
        {
            m = c;
            x = f;
            y = l;
        }
    }

    cout<<x<<" - "<<y;
    return 0;
}