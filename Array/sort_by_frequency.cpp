#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second > b.second) return true;
    // if(a.second == b.second) return true;
    if(a.second < b.second) return false;
    return true;
}


void sort_freq(vector<int> ar, int n)
{
    vector<pair<int, int>> p;
    map<int, int> mp;

    for(int i:ar)
    {
        mp[i]++;
    }

    for(auto itr : mp)
    {
        p.push_back(itr);
    }

    sort(p.begin(), p.end(), cmp);

    ar.clear();
    for(auto i:p)
    {
        int j = i.second;
        for(int k = 0; k<j; k++)
        {
            ar.push_back(i.first);
        }
    }
    for(int i : ar) cout<<i;
}

int main()
{
    vector<int> ar = {1, 2, 3, 1, 2, 1, 3, 4, 2, 2};
    int n = sizeof(ar)/sizeof(int);
    sort_freq(ar, n);
    return 0;
}