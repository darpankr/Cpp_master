#include<iostream>
#include<stdlib.h>
#include<stack>
#include "class.h"

static int v = 0;

using namespace std;

void spiral(Tree *root)
{
    if(root == NULL) return;

    stack<Tree *> s1, s2;

    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Tree *temp = s1.top();
            s1.pop();
            cout<<temp->data<<" ";

            if(temp->right != NULL) s2.push(temp->right);
            if(temp->left != NULL) s2.push(temp->left);
        }

        while(!s2.empty())
        {
            Tree *temp = s2.top();
            s2.pop();
            cout<<temp->data<<" ";

            if(temp->left != NULL) s1.push(temp->left);
            if(temp->right != NULL) s1.push(temp->right);
        }

    }
}

int main()
{
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->right->left = new Tree(6);
    root->left->right = new Tree(5);
    root->right->right = new Tree(7);

    return 0;
}