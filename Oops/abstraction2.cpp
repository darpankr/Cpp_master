#include<bits/stdc++.h>

using namespace std;

class User
{
    private:

    int id;
    string pass;

    public:

    void createId(int id, string pass)
    {
        id = id;
        pass = pass;

        cout<<"User: "<<id<<" account created"<<endl;
    }

    void authenticate(string pas)
    {
        if(pass == pas)
        {
            cout<<"Login successfull\n";
        }
        else
        {
            cout<<"Incorrect password\n";
        }
    }
};

int main()
{
    User u1, u2;

    u1.createId(1, "darpan");
    u2.createId(2, "Rohit");

    u1.authenticate("darpan");
    u2.authenticate("Mohit");
    return 0;
}