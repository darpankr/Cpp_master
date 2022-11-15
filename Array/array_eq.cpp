#include<bits/stdc++.h>

using namespace std;

class Solution
{
    public:
    bool check(vector<int> v1, vector<int> v2, int n)
    {
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for(int i = 0; i<n; i++)
        {
            if(v1[i] != v2[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    vector<int> v1, v2;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter n: ";
        cin>>n;
        cout<<"A : "<<endl;
        for(int i = 0; i<n; i++)
        {
            int it;
            cin>>it;
            v1.push_back(it);
        }

        cout<<"B : "<<endl;
        for(int i = 0; i<n; i++)
        {
            int it;
            cin>>it;
            v2.push_back(it);
        }

        Solution ob;
        cout<<ob.check(v1, v2, n);
    }
    return 0;
}