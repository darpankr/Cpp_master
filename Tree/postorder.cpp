#include<iostream>
#include<stdlib.h>
#include<stack>

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

void postorder(Tree *root)
{
    if(root == NULL) return;
    Tree *temp = root;
    stack<Tree *> s1, s2;
    s1.push(temp);

    while(!s1.empty())
    {
        temp = s1.top();
        s1.pop();

        s2.push(temp);
        if(temp->left != NULL)
        temp = temp->left;
        s1.push(temp);
        if(temp->right != NULL)
        temp = temp->right;
        s1.push(temp);
    }

    while(!s2.empty())
    {
        cout<<s2.top()->data<<" ";
        s2.pop();
    }

    cout<<endl;

}

int main()
{
    Tree *root = new Tree(10);
    root -> left = new Tree(20);
    root -> right = new Tree(30);
    root -> left -> left = new Tree(40);
    root -> left -> right = new Tree(50);
    cout <<"postorder: "<< endl;
    postorder(root);
    return 0;
}