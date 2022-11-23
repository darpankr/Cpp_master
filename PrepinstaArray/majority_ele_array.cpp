#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

void majority(vector<int> v)
{
    map<int, int> m;
    vector<pair<int, int>> vp;
    for(auto i:v)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        vp.push_back(i);
    }
    sort(vp.begin(), vp.end(), cmp);
    cout<<"hig "<<vp[0].first;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"enter the n: ";
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    majority(v);


    return 0;
}