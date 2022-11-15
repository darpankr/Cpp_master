#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second) return true;
    if(a.second == b.second) return true;
    if(a.second < b.second) return false;
}

void sort_freq(int ar[], int n)
{
    // sort(ar, ar+n);
    map<int, int> mp;

    for(int i = 0; i< n; i++)
    {
        mp[ar[i]]++;
    }
    vector<pair<int, int>> v;

    for(auto it:mp)
    {
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);

    for(auto ele:v)
    {
        cout<<ele.first<<" , "<<ele.second<<endl;
    }
    for(auto i)
    {

    }
}

int main()
{
    int ar[] = {1, 2, 3, 1, 2, 1, 3, 4, 2, 2};
    int n = sizeof(ar)/sizeof(int);
    sort_freq(ar, n);
    return 0;
}