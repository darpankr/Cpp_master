#include<iostream>
using namespace std;

int main()
{
    string em = "darpan kumar sing";

    //declaration of iterator
    string :: iterator it; //it is a pointer variable

    //begin() => function to point first char in the string
    it = em.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it;

    //end() => func to point to the last char in the string
    string :: iterator itr;

    itr = em.end();
    cout<<*itr<<endl;//print \n
    itr--;
    cout<<*itr<<endl;//print last char
    itr--;
    cout<<*itr;


    //reverse of iteration
    string :: reverse_iterator rit;

    rit = em.rbegin();
    cout<<*rit<<endl;
    rit++;
    cout<<*rit;//all will print reverse from the last

    string :: reverse_iterator ritr;
    ritr = em.rend();
    ritr--;
    cout<<*ritr<<endl;
    ritr--;
    cout<<*ritr;
    
    return 0;
}