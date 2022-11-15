#include<bits/stdc++.h>

//First repeating element in an array
//1 2 4 7 3 4 2

using namespace std;

void find_repeat(int ar[], int n)
{
    map<int, int> mp;
    for(int i = 0; i< n; i++)
    {
        mp[ar[i]]++;
        if(mp[ar[i]]>1)
        {
            cout<<ar[i]<<endl;
            break;
        }
    }
}

void last_repeat(int ar[], int n)
{
    map<int , int> mp;
    for(int i = n-1; i>=0; i--)
    {
        mp[ar[i]]++;
        if(mp[ar[i]]>1)
        {
            cout<<"Element: "<<ar[i]<<endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"array size: ";
        cin>>n;
        int ar[n];
        for(int i = 0; i< n; i++)
        {
            cin>>ar[i];
        }
        // find_repeat(ar, n);
        last_repeat(ar, n);
    }
}