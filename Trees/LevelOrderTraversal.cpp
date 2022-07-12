#include<iostream>
#include<queue>
using namespace std;

struct node{
    int data;
    node* left;
    node*right;
};
void leveOrder(node*root)
{
    if(root==NULL){
    return;
    }
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        node* current = Q.front();
         Q.pop();
        cout<<current->data<<" ";
        if(current->left!=NULL){
        Q.push(current->left);
        }
        if(current->right!=NULL){
        Q.push(current->right);
        }
    }
}
node* Insert(node* root, int data)
{
    if(root==NULL)
    {
        root = new node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if(data<=root->data)
    {
        root->left = Insert(root->left,data);
    }
    else {
    root->right = Insert(root->right,data);
    }
    return root;

}

 int main(){
    node* root = NULL;
    root = Insert(root,5); root = Insert(root,4);
	root = Insert(root,3); root = Insert(root,2); 
	root = Insert(root,6); root = Insert(root,7);
    leveOrder(root);
    
 }



