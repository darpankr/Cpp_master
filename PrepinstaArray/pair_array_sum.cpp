#include<bits/stdc++.h>

using namespace std;

void find_sum_pair(vector<int> v, int sum)
{
    int c = 0;
    for(int i = 0; i<v.size(); i++)
    {
        for(int j = i+1; j<v.size(); j++)
        {
            if(v[i]+v[j] == sum)
            {
                c++;
                cout<<"["<<v[i]<<","<<v[j]<<"]"<<endl;
            }
        }
    }
    cout<<c;
}

int main()
{
    vector<int> v = {5, 2, 3, 4, 1, 6, 7};
    int sum = 7;

    find_sum_pair(v, sum);
    return 0;
}