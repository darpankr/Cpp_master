#include<iostream>
#include "class.h"

using namespace std;

bool sum_property(Tree *root)
{
    int lchild = 0, rchild = 0;
    if(root == NULL || (root->left == NULL && root->right == NULL)) return true;
    else
    {
        if(root->left != NULL) lchild += root->left->data;
        if(root->right != NULL) rchild += root->right->data;

        return ((root->data == (lchild + rchild)) && sum_property(root->left) && sum_property(root->right));
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

    cout<<"R1 : "<<sum_property(root1)<<endl;
    cout<<"R2 : "<<sum_property(root2)<<endl;

    return 0;
}