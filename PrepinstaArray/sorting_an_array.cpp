#include<bits/stdc++.h>

using namespace std;

int main()
{
    array<int, 5> ar = {2, 6, 3, 8, 1};

    for(auto i:ar) cout<<i<<",";
    sort(ar.begin(), ar.end());
    for(auto i:ar) cout<<i<<",";
    return 0;
}