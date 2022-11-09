#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

class Tree
{
    public:
    int data;
    Tree *left, *right;

    Tree(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void preorder_traversal(Tree *root)
{
    if(root == NULL) return;
    stack<Tree *> s;
    s.push(root);

    while(!s.empty())
    {
        Tree *temp = s.top();
        cout<<temp->data<<" ";

        s.pop();
        if(temp->right != NULL) { s.push(temp->right);}

        if(temp->left != NULL) { s.push(temp->left);}
    }
}

int main()
{
    Tree *root = new Tree(10);
    root->left = new Tree(20);
    root->right = new Tree(30);
    root->left->right = new Tree(40);
    root->left->left = new Tree(50);
    cout<<"Preorder traversal: "<<endl;
    preorder_traversal(root);
    return 0;
}