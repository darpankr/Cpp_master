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
        left = NULL;
        right = NULL;
    }
};