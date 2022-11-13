#include<iostream>
#include<stdlib.h>
#include<queue>

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

void bsf(Tree *root)
{
    queue<Tree *> q;
    q.push(root);
    while(q.empty() == false)
    {
        Tree *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
}

int main()
{
    Tree *root = new Tree(5);
    root->left = new Tree(4);
    root->right = new Tree(3);
    root->left->left = new Tree(2);
    root->left->right = new Tree(1);
    root->right->left = new Tree(6);
    root->right->right = new Tree(7);
    root->right->right->left = new Tree(8);
    root->right->right->right = new Tree(9);

    cout<<"level order traversing"<<endl;

    bsf(root);
    return 0;
}