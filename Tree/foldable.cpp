#include<iostream>
#include "class.h"

using namespace std;

bool foldable(Tree *root1, Tree *root2)
{
    if(root1 == NULL && root2 == NULL) return true;
    else if(root1 != NULL && root2 != NULL)
    {
        return foldable(root1->left, root2->right) && foldable(root1->right, root2->left);
    }
    else
    {
        return false;
    }
}

bool fol(Tree *root)
{
    if(root == NULL) return true;
    else return foldable(root->left, root->right);
}

int main()
{
    Tree *root1 = new Tree(5);
    root1->left = new Tree(4);
    root1->right = new Tree(6);

    Tree *root2 = new Tree(5);
    root2->right = new Tree(4);
    root2->left = new Tree(6);

    Tree *root3 = new Tree(5);
    root3->left = new Tree(4);
    root3->left = new Tree(6);

    cout<<"R1 and R2: "<<fol(root1)<<endl;
    cout<<"R1 and R2: "<<fol(root1)<<endl;
    cout<<"R1 and R2: "<<fol(root3)<<endl;
    return 0;
}