#include<bits/stdc++.h>

using namespace std;

void sum_pair(vector<int> v1, vector<int> v2, int n, int k)
{
    map<pair<int, int>, int> mp;
    for(auto i:v1)
    {
        for(auto j:v2)
        {
            // pair<int, int> pp(i, j);
            // mp.insert({pp, i+j});
            // pair<int, int> pp(i, j);
            // mp.insert(pair<pair<int, int>, int> ((i, j), i+j));
        }
    }
    cout<<"jj";
    map<pair<int, int>, int> :: iterator itr;
    for(itr = mp.begin(); itr!=mp.end(); itr++)
    {
        cout<<itr->second<<endl;
    }
    // for(auto itr:mp)
    // {
    //     cout<<"h"<<endl;
    //     cout<<itr.first.first<<" + "<<itr.first.second<<" = "<<itr.second<<endl;
    // }
}

int main()
{
    vector<int> v1;
    vector<int> v2;
    cout<<"Enter the n:";
    int n;
    cin>>n;
    cout<<"v1:"<<endl;
    for(int i = 0; i< n; i++)
    {
        int j;
        cin>>j;
        v1.push_back(j);
    }
    cout<<"v2:"<<endl;
    for(int i = 0; i< n; i++)
    {
        int j;
        cin>>j;
        v1.push_back(j);
    }
    cout<<"enter the pair no: ";
    int k;
    cin>>k;
    sum_pair(v1, v2, n, k);
    return 0;
}