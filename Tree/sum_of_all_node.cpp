#include<iostream>
#include "class.h"

using namespace std;

int sum_nodes(Tree *root)
{
    // int sum = 0;
    if(root == NULL) return 0;
    else
    {
        return (root->data + sum_nodes(root->left) + sum_nodes(root->right));
    }
}

int main()
{
    Tree *root1 = new Tree(12);
    root1->left = new Tree(3);
    root1->right = new Tree(9);
    root1->left->left = new Tree(1);
    root1->left->right = new Tree(2);
    root1->right->left = new Tree(4);
    root1->right->right = new Tree(5);

    Tree *root2 = new Tree(12);
    root2->left = new Tree(3);
    root2->right = new Tree(9);
    root2->left->left = new Tree(1);
    root2->left->right = new Tree(2);
    root2->right->left = new Tree(6);
    root2->right->right = new Tree(5);

    cout<<"R1 : "<<sum_nodes(root1)<<endl;
    cout<<"R2 : "<<sum_nodes(root2)<<endl;

    return 0;
}