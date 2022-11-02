#include<iostream>
#include<list>

using namespace std;

//push_front()  to push element at start
//push_back()   to push element at back
//insert(,)     to insert elemnt at any index
//front()       to access front element
//back()        to access back element
//begin()       iteration starting pointer
//end()         iteration ending pointer
//pop_front()   to pop front element
//pop_back()    tp pop back element
//erase()       to delete indexed element
//reverse()     to reverse the list
//sort()        to sort the list
//clear()       to clear the list
//size()        to find out the size
//merge()       to merge to list
//remove(val)   to remove by value
//unique()      to remove the duplicate

int main()
{
    list<int> l;

    l.push_front(5);
    l.push_back(10);
    l.push_back(15);
    l.push_front(1);
    // l.insert(l.begin() + 1, 13);

    list<int> :: iterator it;

    for(it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<endl;
    }

    // cout<<l.front()<<endl<<l.back();
    l.reverse();

    for(it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<endl;
    }
}