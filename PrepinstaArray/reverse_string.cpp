#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "darpan";
    string :: reverse_iterator itr;

    for(itr = str.rbegin(); itr!=str.rend(); itr++)
    {
        cout<<*itr;
    }
    return 0;
}