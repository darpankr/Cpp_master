#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class BST
{
    public:
    int data;
    BST *left, *right;

    BST(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }

    BST()
    {
        data = NULL;
    }

    void find(int x)
    {

    }

    void insert(int x, BST *b)
    {
        if(b == NULL) {b = new BST(x); return;}
        if(b->data == x) { cout<<"Same value entered";}
        if(b->data > x)
        {
            if(b->left == NULL)
            {
                b->left = new BST(x);
                return;
            }
            else
            {
                insert(x, b->left);
            }
        }
        else
        {
            /* code */
            if(b->right == NULL)
            {
                b->right = new BST(x);
                return;
            }
            else
            {
                insert(x,b->right);
            }
        }

    }

    BST* del(int x, BST *b)
    {
        if(b == NULL) { cout<<"NO element present: \n"; return NULL;}
        else if(x < b->data)
        {
            b->left = del(x, b->left);
        }
        else if(x > b->data)
        {
            b->right = del(x, b->right);
        }
        else
        {
            if(b->left == NULL)
            {
                BST *temp = b->right;
                delete(b);
                return temp;
            }
            else if(b->right == NULL)
            {
                BST *temp = b->left;
                delete(b);
                return temp;
            }
            else
            {
                //Finding the inorder successor
                BST *temp = b->right;
                while(temp->left != NULL) temp = temp->left;

                b->data = temp->data;
                b->right  = del(temp->data, b->right);
            }
        }
        return b;
    }

    void preorder()
    {

    }

    void postorder()
    {

    }

    void inorder(BST *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }
        else
        return;
    }

    void display()
    {

    }
};


int main()
{
    BST *b = new BST();
    while(1)
    {
        int c;
        cout<<"Menu"<<endl;
        cout<<"---------"<<endl;
        cout<<"1.Insert"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Preorder"<<endl;
        cout<<"4.Postorder"<<endl;
        cout<<"5.Inorder"<<endl;
        cout<<"6.Display"<<endl;
        cout<<"7.Exit"<<endl;

        cin>>c;

        switch(c)
        {
            case 1:
            int x;
            cin>>x;
            b->insert(x, b);
            break;

            case 2:
            int x;
            cin>>x;
            b->del(x, b);
            break;

            case 3:
            b->preorder();
            break;

            case 4:
            b->postorder();
            break;

            case 5:
            b->inorder();
            break;

            case 6:
            b->display();
            break;

            case 7:
            exit(0);

            default:
            break;
        }
    }
    return 0;
}