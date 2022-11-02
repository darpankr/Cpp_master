#include<iostream>
#include<vector>

using namespace std;

//insert(v.begin(), i)  to insert element at bigin()
//insert(v.begin()+i, val)  to insert elemnt at any index
//push_back(val)    to insert elemnt at end
//front()       to access first element
//end()         to access end element
//v[index]      to access element at any index
//erase(v.begin())  to del elemnt at front
//erase(v.begin()+i)    to del element at any index
//pop_back()        to dele element at last
//clear()       to clear all element
//for(int i : v)    to iterate through the vector

int main()
{
    vector<int> v;

    // v.insert(v.begin(), 5);
    // v.insert(v.begin()+1, 10);
    // v.insert(v.begin()+2, 15);
    // v.insert(v.end()-1, 6);
    // v.push_back(18);
    int j;

    for(int i = 0; i< 5; i++)
    {
        cin>>j;
        v.insert(v.begin()+i, j);
    }

    // vector<int> :: iterator it;

    // for(it = v.begin(); it!=v.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    // for(int i = 0; i< 5; i++)
    // {
    //     cout<<v[i];
    // }

    for(int i: v)
    {
        cout<<i;
    }
    return 0;
}