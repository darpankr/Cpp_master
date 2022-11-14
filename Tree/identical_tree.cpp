#include<iostream>
#include<stdlib.h>
#include "class.h"

using namespace std;


// class Tree
// {
//     public:
//     int data;
//     Tree *left, *right;

//     Tree(int x)
//     {
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };

bool identical(Tree *root1, Tree *root2)
{
    if(root1 == NULL && root2 == NULL) return true;
    else if(root1 != NULL && root2 != NULL)
    {
        return (root1->data == root2->data && identical(root1->left, root2->left) && identical(root1->right, root2->right));
    }
    else
    {
        return false;
    }
}

int main()
{
    Tree *root1 = new Tree(5);
    root1->left = new Tree(4);
    root1->right = new Tree(6);

    Tree *root2 = new Tree(5);
    root2->left = new Tree(4);
    root2->right = new Tree(6);

    Tree *root3 = new Tree(5);
    root3->left = new Tree(4);
    root3->right = new Tree(6);
    root3->left->left = new Tree(2);

    cout<<"Root1 and Root2: "<<identical(root1, root2)<<endl;
    cout<<"Root3 and Root2: "<<identical(root3, root2)<<endl;
    cout<<"Root1 and Root3: "<<identical(root1, root3)<<endl;
    return 0;
}