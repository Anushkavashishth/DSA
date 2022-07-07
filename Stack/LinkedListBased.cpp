#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* top = NULL;
void Push(int x){
    node* temp = new node();
    temp->data = x;
    temp->next = top;
    top = temp;
}
void Pop(){
    node* temp;
    if(top==NULL)
    {
        return;
    }
    temp=top;
    top=top->next;
    free(temp);
}
void print()
{
    node* temp = top;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<< temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
bool isEmpty(){
    if(top==NULL){
    return true;
    }
    return false;

}

int Top(){
      return top->data;
}
int main(){
    cout<<isEmpty()<<"\n";
    Push(5);print();
    Push(2);print();
    Push(6);print();
    Pop();print();
    Push(2);print();
    Push(6);print();
    Pop();print();
    cout<<"list is: "<<Top();
    cout<<"\n";
    cout<<isEmpty()<<"\n";
    

}
