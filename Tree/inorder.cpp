#include<iostream>
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

void inorder(Tree *root)
{
    if(root == NULL) return;
    stack<Tree *> s;

    Tree *temp = root;

    while(!s.empty() || temp != NULL)
    {
        while(temp != NULL)
        {
            s.push(temp);
            temp = temp->left;
        }

        temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
        temp = temp->right;
    }
}

int main()
{
    Tree *root = new Tree(10);
    root -> left = new Tree(20);
    root -> right = new Tree(30);
    root -> left -> left = new Tree(40);
    root -> left -> right = new Tree(50);
    cout<<"inorder traversal: "<<endl;
    inorder(root);
    return 0;
}