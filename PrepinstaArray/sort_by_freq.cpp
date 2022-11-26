#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second>b.second;
}


int main()
{
    vector<int> v = {3,3,3,3,3,4,4,1,2,2,2};
    map<int, int> mp;
    vector<int> :: iterator itr;

    for(itr = v.begin(); itr!=v.end(); itr++)
    {
        mp[*itr]++;
    }

    pair<int, int> p[mp.size()];
    int j = 0;
    for(auto i:mp)
    {
        p[j++] = make_pair(i.first, i.second);
    }
    int s  =mp.size();
    sort(p, p+s, cmp);
    for(auto i:p)
    {
        cout<<i.first<<" - "<<i.second<<endl;
    }
    return 0;
}