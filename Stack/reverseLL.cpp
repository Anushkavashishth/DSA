#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head;
void reverse(){
    if(head==NULL){
    return;
    }
    stack<node*>s;
    node* temp = head;
    while(temp!=NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}
void push(int x){
    node* temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n";
}



int main(){
    push(8);
    push(10);
    push(12);
    push(5);print();
    reverse();print();

}