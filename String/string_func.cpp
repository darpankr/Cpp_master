#include<iostream>

using namespace std;

int main()
{
    string em = "darpan kumar";

    //push_back()=> to push letter one by one

    cout<<"Before pushback"<<em<<endl;
    em.push_back(' ');
    em.push_back('s');
    em.push_back('i');
    em.push_back('n');
    em.push_back('g');

    cout<<"After push "<<em<<endl;

    //pop_back is the reverse of push_back

    em.pop_back();
    cout<<"after the pop+back "<<em<<endl;

    //length() fuction

    int l = em.length();
    cout<<"The length is "<<l<<endl;

    //resize() to increase or decrease the size of the str var

    em.resize(10);
    cout<<" after resize "<<em<<endl;

    //shrink_to_fit() to fit the string size with the size of value

    em.shrink_to_fit();
    return 0;
}