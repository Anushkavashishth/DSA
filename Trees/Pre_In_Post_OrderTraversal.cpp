#include<iostream>
using namespace std;
struct node{
    char data;
    node* left;
    node* right;
};

void PreOrder(node* root)
{
    if(root==NULL)return;

    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(node* root)
{
    if(root==NULL)return;

    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}
void PostOrder(node* root)
{
    if(root==NULL)return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}
node* Print(node* root,char data)
{
   // node* root = new node();
    if(root==NULL)
    {
        root = new node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data <= root->data){
    root->left= Print(root->left,data);
    }
    else{
    root->right = Print(root->right,data);
    }
    return root;
}

int main(){
    node* root = NULL;
    root = Print(root,'M');
    root = Print(root,'B');
    root = Print(root,'Q');
    root = Print(root,'Z');
    root = Print(root,'A');
    root = Print(root,'C');
    cout<<"Preorder: ";
    PreOrder(root);
    cout<<"\n";
    cout<<"Inorder: ";
    InOrder(root);
    cout<<"\n";
    cout<<"Postorder: ";
    PostOrder(root);
    cout<<"\n";
}