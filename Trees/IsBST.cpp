#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    
};
bool isBST(node* root, node* min=NULL,node* max=NULL)
{
    if(root==NULL)
    {
        return true;
    }    
    
    if(min!=NULL and root->data<=min->data){
        return false;
    }
    if(max!=NULL and root->data>=max->data){
        return false;
    }
    return isBST(root->left, min,root )and isBST(root->right, root, max );
    
}

node* newNode(int data){
    node* Node = new node;
    Node->data = data;
    Node->left = Node->right = NULL;
    return Node;

}

 int main(){
     node* root = newNode(3);
     root->left = newNode(2);
     root->right = newNode(5);
     //root->left->left = newNode(2);
     //root->left->right = newNode(2);
    
    if(isBST(root,NULL,NULL)){
       cout<<"Valid BST"<<endl;
    }else{
    cout<<"Invalid BST"<<endl;
    }
    return 0;
 }