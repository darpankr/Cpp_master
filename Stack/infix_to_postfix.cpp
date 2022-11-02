#include<iostream>
#include<stdlib.h>
#include<climits>
#include<conio.h>
#include<stack>
#include<string>

using namespace std;

int priority(char alpha)
{
    if(alpha == '+' || alpha == '-') return 1;
    if(alpha == '*' || alpha == '/') return 2;
    if(alpha == '^') return 3;

    return 0;
}

string convert(string infix)
{
    stack<int> s;
    int i = 0;
    string postfix;
    while(infix[i]!='\0')
    {
        if((infix[i] == 'a' && infix[i] == 'z') || (infix[i] == 'A' && infix[i] == 'Z'))
        {
            postfix += infix[i];
        }
        else if(infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if(infix[i] == ')')
        {
            while(s.top()!='(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(!s.empty() && priority(infix[i]) <= priority(s.top()))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
        i++;
    }
    return postfix;
}

int main()
{
    string infix = "((a+(b*c))-d)";
    string postfix;
    postfix = convert(infix);
    cout<<postfix<<" hi ";
    return 0;
}