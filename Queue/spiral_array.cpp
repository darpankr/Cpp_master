#include<iostream>
#include<queue>
#include<bits/stdc++.h>

using namespace std;

/*
1, 2, 3, 4, 5
2, 3, 4, 5, 1
3, 4, 5, 1, 2
4, 5, 1, 2, 3
5, 1, 2, 3, 4
*/

deque<int> dq;

void display()
{
    int i = 0;
    while(i!=5)
    {
        for(int e : dq)
        {
            cout<<e<<" , ";
        }
        cout<<endl;
        int j = dq.front();
        dq.pop_front();
        dq.push_back(j);
        i++;
    }
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    // dq.resize(sizeof(ar));
    for(int i = 0; i<sizeof(ar)/sizeof(int); i++)
    {
        dq.push_back(ar[i]);
    }

    display();
    return 0;
}