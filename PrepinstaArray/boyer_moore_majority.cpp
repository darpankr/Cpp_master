#include<bits/stdc++.h>

using namespace std;

void boyer_majority(vector<int> v, int n)
{
    int k = n/2;
    map<int, int> mp;
    for(auto i:v)
    {
        mp[i]++;
    }
    for(auto i:mp)
    {
        if(i.second > k)
        {
            cout<<"maj: "<<i.first;
            return;
        }
    }
    cout<<-1;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"enter the n:";
    cin>>n;
    for(int i = 0; i< n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }

    boyer_majority(v, n);
    return 0;
}