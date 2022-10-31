#include<iostream>

using namespace std;
int main()
{
    string em = "darpan";
    string me = "kumar";

    string de = em +" "+ me;
    cout<<de<<endl;//darpan kumar

    //append
    em.append(me);

    cout<<em<<endl;//darpankumar
    cout<<me<<endl;//kumar
    return 0;
}