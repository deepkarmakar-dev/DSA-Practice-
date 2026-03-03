#include <iostream>
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


int countNodes(node* root)
{
    
    if(root==NULL)
    return 0;
    
    int left=countNodes(root->left);
    
    int right=countNodes(root->right);
    
    return left+right+1;
    
}

int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(3);
    root->left->right = new node(7);

    cout << "Total Nodes: " << countNodes(root);

    return 0;
}
