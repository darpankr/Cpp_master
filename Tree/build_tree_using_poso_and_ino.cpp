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
        x = data;
        left = NULL;
        right = NULL;
    }

};

int search(int in[], int s, int e, int ele)
{
    for(int i = s; i<e; i++)
    {
        if(in[i] == ele)
        {
            return i;
        }
    }
}

Tree *build_tree(int in[], int post[], int s, int e)
{
    static int index = e;

    if(s>e) return NULL;
    Tree *temp = new Tree(post[index--]);

    if(s == e) return temp;

    int ele = temp->data;

    int ind = search(in, s, e, ele);

    temp->left = build_tree(in, post, s, ind-1);
    temp->right = build_tree(in, post, ind+1, e);

    return temp;

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
    int in[] = { 12, 25, 30, 37, 40, 50, 60, 62, 70, 75, 87};
    int post[] = {12, 30, 40, 37, 25, 60, 70, 62, 87, 75, 50 };

    cout<<"inorder traversal: "<<endl;
    Tree *root  = build_tree(in, post, 0, 10);
    inorder(root);
    return 0;
}