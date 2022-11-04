#include<iostream>
#include<unordered_set>

using namespace std;

void display(unordered_set<int> u)
{
    for(int i : u)
    {
        cout<<i<<endl;
    }
}

int main()
{
    unordered_set<int> us = {1, 2, 3, 4 ,5, 2, 4};
    display(us);

    //INSERT

    us.insert(8);
    us.insert({6, 9, 0});
    display(us);

    //DELETE

    us.erase(8);

    //CLEAR() = TO clear all the value

    //FIND AND COUNT

    if(us.find(6) != us.end()){cout<<"yes\n";}
    else{cout<<"no\n";}

    if(us.count(6)){cout<<"yes\n";}
    else{cout<<"no\n";}

    //SIZE

    cout<<us.size();
    return 0;
}