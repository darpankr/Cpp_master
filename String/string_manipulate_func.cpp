#include<iostream>
using namespace std;


int main()
{
    //copy() => to copy the substring from one str to otr str
    string str1 = "i am computer science student";

    char str2[20];//have to use char str

    str1.copy(str2, 9, 5);//copying str1 to str2 total 9 char start from 5th indexed

    str2[9] = '\0';//null at last

    cout<<str2;

    //swap() => to swap two string
    string em = "orange";
    string me = "mango";

    em.swap(me);
    cout<<em<<" "<<me<<endl;
    return 0;
}