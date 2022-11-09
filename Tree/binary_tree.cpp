#include<iostream>
#include<stdlib.h>

using namespace std;

class Node
{
    public:
    int value;
    Node *left;
    Node *right;

};

class Tree
{
    public:
    Tree();
    ~Tree();

    void insert(int key);
    Node *search(int key);
    void destroy_tree();
    void inorder_print();
    void postorder_print();
    void preorder_print();

    private:

    void destroy_tree(Node *leaf);
    void insert(int key, Node *leaf);
    Node *search(int key, Node *leaf);
    void inorder_print(Node *leaf);
    void postorder_print(Node *leaf);
    void preorder_print(Node *leaf);

    Node *root;
};

Tree :: Tree()
{
    root = NULL;
}

Tree :: ~Tree()
{
    destroy_tree();
}

void Tree :: destroy_tree(Node *leaf)
{
    if(leaf != NULL)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}

void Tree :: insert(int key, Node *leaf)
{
    if(key < leaf->value)
    {
        if(leaf->left != NULL)
        {
            insert(key, leaf->left);
        }
        else
        {
            leaf->left = new Node;
            leaf->left->value = key;
            leaf->left->left = NULL;
            leaf->right->right = NULL;
        }
    }
    else if(key > leaf->value)
    {
        if(leaf->right != NULL)
        {
            insert(key, leaf->right);
        }
        else
        {
            leaf->right = new Node;
            leaf->value = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}

void Tree :: insert(int key)
{
    if(root != NULL)
    {
        insert(key, root);
    }
    else
    {
        root = new Node;
        root->value = key;
        root->left = NULL;
        root->right = NULL;
    }
}

Node *Tree :: search(int key, Node *leaf)
{
    if(leaf != NULL)
    {
        if(key == leaf->value) { return leaf;}
        if(key < leaf->value) { return search(key, leaf->left);}

        else { return search(key, leaf->right);}
    }
    else
    {
        return NULL;
    }
}

Node *Tree :: search(int key)
{
    return search(key, root);
}

void Tree :: destroy_tree()
{
    destroy_tree(root);
}

void Tree :: inorder_print()
{
    inorder_print(root);
    cout<<"\n";
}

void Tree :: inorder_print(Node *leaf)
{
    if(leaf != NULL)
    {
        inorder_print(leaf->left);
        cout<<leaf->value<<" , ";
        inorder_print(leaf->right);
    }
}

void Tree :: postorder_print()
{
    postorder_print(root);
    cout<<"\n";
}

void Tree :: postorder_print(Node *leaf)
{
    postorder_print(leaf->left);
    postorder_print(leaf->right);
    cout<<leaf->value<<" , ";
}

void Tree :: preorder_print()
{
    preorder_print(root);
    cout<<"\n";
}

void Tree :: preorder_print(Node *leaf)
{
    cout<<leaf->value<<" , ";
    preorder_print(leaf->left);
    preorder_print(leaf->right);
}

int main()
{
    Tree *tree = new Tree();

    tree->insert(10);
    tree->insert(6);
    tree->insert(14);
    tree->insert(5);
    tree->insert(8);
    tree->insert(11);
    tree->insert(18);

    tree->postorder_print();
    tree->preorder_print();
    tree->inorder_print();

    delete tree;

    return 0;
}