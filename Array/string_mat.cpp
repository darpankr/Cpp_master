#include<bits/stdc++.h>

using namespace std;

void string_mat(vector<string> v1, vector<string> v2)
{
    vector<int> l;
    for(auto s:v1)
    {
        // cout<<s<<endl;
        int c = 0;
        for(auto s2:v2)
        {
            if(s == s2)
            {
                c++;
            }
        }
        l.push_back(c);
    }
    for(auto i:l)
    {
        cout<<i<<endl;
    }
}

int main()
{
    vector<string> v1 = {"aab", "ab", "xxy"};
    vector<string> v2 = {"aab", "ab", "ab"};

    string_mat(v1, v2);
    return 0;
}