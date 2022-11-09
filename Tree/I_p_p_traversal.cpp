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

    void show(Tree *root);
    void preorder_traversal(Tree *root);
    void inorder_traversal(Tree *root);
    void postorder_traversal(Tree *root);
};

// void Tree :: show(Tree *root)
// {
//     if(root == NULL)
//     {
//         return;
//     }
//     cout<<root->data<<" , ";
//     if(root->left != NULL)
//     {
//         cout<<
//     }

// }

void Tree :: preorder_traversal(Tree *root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" , ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void Tree :: postorder_traversal(Tree *root)
{
    if(root == NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" , ";
}

void Tree :: inorder_traversal(Tree *root)
{
    if(root == NULL)
    {
        return;
    }

    inorder_traversal(root->left);
    cout<<root->data<<" , ";
    inorder_traversal(root->right);
}

int main()
{
    Tree *root = new Tree(17);
    root->left = new Tree(10);
    root->right = new Tree(11);
    root->left->left = new Tree(7);
    root->right->left = new Tree(27);
    root->right->right = new Tree(9);

    cout<<"Postorder: \n";
    root->postorder_traversal(root);
    cout<<"preorder: \n";
    root->preorder_traversal(root);
    cout<<"Inorder: \n";
    root->inorder_traversal(root);

    return 0;
}