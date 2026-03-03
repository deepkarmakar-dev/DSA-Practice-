#include <iostream>
#include <algorithm>  
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


int height(node* root)
{
   if(root==NULL)
   return 0;
   int left=height(root->left);
   int right=height(root->right);
   
   return max(left,right)+1;
   
   
}

int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(3);
    root->left->right = new node(7);

    cout << "Height: " << height(root);

    return 0;
}
