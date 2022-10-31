#include<iostream>

using namespace std;

int main()
{
    // char st[50];
    // cout<<"Entre the name"<<endl;
    // cin>>st;
    // cout<<st;
    //if input is darpan kumar
    //output will be darpan
    //because in char arr[] = cin does not include any string after ''

    //original code below
    char ar[30];
    cout<<"Enter the name2: "<<endl;
    cin.get(ar, 3);//it will storre max two letter bcz of 3
    cout<<ar;

    string str, str1;
    cout<<"Enter the string: "<<endl;
    cin>>str;//dont include space
    cout<<str<<endl;
    getline(cin, str1);
    cout<<str1;
    return 0;
}