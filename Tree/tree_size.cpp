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

int tree_size(Tree *root)
{
    if(root == NULL) return 0;
    else
    {
        return 1 + tree_size(root->left) + tree_size(root->right);
    }
}

int main()
{
    Tree *root = new Tree(5);
    root->left = new Tree(4);
    root->right = new Tree(6);
    root->left->left = new Tree(3);
    root->left->right = new Tree(2);
    root->left->left->left = new Tree(1);

    int s = tree_size(root);
    cout<<"The tree size is: "<<s<<endl;
    return 0;
}