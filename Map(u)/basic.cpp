#include<iostream>
#include<unordered_map>

using namespace std;

void display(unordered_map<string, int> op)
{
    for(auto [k, v] : op)
    {
        cout<<k<<" - "<<v<<endl;
    }
}


int main()
{
    unordered_map<string, int> um = {{"one", 1}, {"two", 2}, {"three", 3}};

    display(um);
    cout<<"-------";


    //INSERTION

    unordered_map<string, int> ump;
    ump["a"] = 5;
    ump.insert({"b", 10});
    ump.insert({{"c", 15}, {"d", 20}});

    display(ump);
    cout<<"-------";

    //ACCESSING

    ump["b"];
    ump.at("c");

    //MODIFY

    ump.at("b") = 11;
    display(ump);

    //ERASE

    ump.erase("b");

    display(ump);

    //FIND AND COUNT

    if(ump.find("c") != ump.end())
    {
        cout<<"yes\n";
    }
    else{
        cout<<"No\n";
    }

    if(ump.find("b") != ump.end())
    {
        cout<<"yes\n";
    }
    else{
        cout<<"No\n";
    }

    if(ump.count("c"))
    {
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }

    if(ump.count("b"))
    {
        cout<<"yes\n";
    }
    else{
        cout<<"no\n";
    }
}