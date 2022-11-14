#include<iostream>
#include<stdlib.h>

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

int height(Tree *root)
{
    if(root == NULL) return 0;
    else
    {
        return 1 + max(height(root->left), height(root->right));
    }
}

int main()
{
    Tree *root = new Tree(5);
    root->left = new Tree(4);
    root->right = new Tree(6);
    root->left->left = new Tree(2);
    root->right->left = new Tree(6);
    root->right->left->right = new Tree(8);
    cout<<"The height of tree is: "<<height(root)<<endl;
    return 0;
}