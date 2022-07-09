#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right= NULL;
    }
};
node* InsertBST(node* root,int val)
{
    if(root==NULL)//Empty tree
    {
        return new node(val);
    }
    else if(val<root->data)
    {
        root->left= InsertBST(root->left,val);
    }
    else
    {
        root->right  = InsertBST(root->right,val);
    }
    return root;
}
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    print(root->left);
    cout<<root->data;
    print(root->right);
}
int main()
{
    node* root= NULL;
    root = InsertBST(root, 5);
    InsertBST(root, 1);
    InsertBST(root, 3);
    InsertBST(root, 4);
    InsertBST(root, 2);
    InsertBST(root, 7);
    print(root);
    cout<<endl;
    return 0;
}