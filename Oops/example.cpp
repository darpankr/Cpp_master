#include<bits/stdc++.h>

using namespace std;

class parent //parent class
{

public:

void property()
{
cout<<"land+cash+gold\n"; 
}

void marriage()
{
cout<<"arranged marriage\n";
}

};

class child:public parent //child class
{

public:

void marriage()//own definition of child
{
cout<<"love marraige\n";
}
//contains property() from parent and its own marraige()

};

int main()
{
parent p;
p.property();
p.marriage();

child c;
c.property();
c.marriage();
    return 0;
}