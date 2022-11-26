#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1};
    vector<int> :: iterator itr;
    multiset<int> ms;
    for(itr = v.begin(); itr!=v.end(); itr++)
    {
        ms.insert(*itr);
    }
    v.clear();
    for(int i:ms)
    {
        cout<<i<<",";
    }
    cout<<endl;
    return 0;
}