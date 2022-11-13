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
        right = NULL;
        left = NULL;
    }
};

int search(int ino[],int s, int e, int ele)
{
    for(int i = s; i<e; i++)
    {
        if(ino[i] == ele)
        {
            return i;
        }
    }
}

Tree *Build_tree(int ino[],int preo[], int s, int e)
{
    static int index = 0;
    if(s > e) return NULL;
    Tree *root = new Tree(preo[index++]);
    int ele = root->data;

    if(s == e) return root;
    int ind = search(ino, s, e, ele);

    root->left = Build_tree(ino, preo, s, ind-1);
    root->right = Build_tree(ino, preo, ind+1, e);
    return root;
}

void inorder(Tree *root)
{
    if(root == NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main()
{
    int ino[] = {12, 25, 30, 37, 40, 50, 60, 62, 70, 75, 87};
    int preo[] = {50, 25, 12, 37, 30, 40, 75, 62, 60, 70, 87};
    cout<<"Inorder traversal: "<<endl;
    Tree *main = Build_tree(ino, preo, 0, 10);
    inorder(main);
    return 0;
}