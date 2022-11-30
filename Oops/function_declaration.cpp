#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:

    int rollNo, weight, age;
    string name;

    //FUNCTION DEFIEN INSIDE
    void printRollNo()
    {
        cout<<"Roll NO: "<<rollNo<<endl;
    }

    void printName();
};

//FUNCTION DEFINE UTSIDE
void Student :: printName()
{
    cout<<"Name : "<<name<<endl;
}

int main()
{
    Student s1;
    s1.rollNo = 10;
    s1.name = "Peter";

    s1.printRollNo();
    s1.printName();
    return 0;
}