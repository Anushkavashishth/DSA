#include<iostream>
using namespace std;
struct node
{
    int data;
    node* prev;
    node* next;
};
node* head;

node* GetNewNode(int x)
{
    node* NewNode = new node();
    NewNode->data = x;
    NewNode->prev = NULL;
    NewNode->next = NULL;
    return NewNode;
}
//Insert at head
void InsertAtHead(int x)
{
    node* temp = GetNewNode(x);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp; 
}
void InsertAtEnd(int x)
{
    node* temp = head;
    if(head==NULL)
    {
        head = temp;
        return;
    }
    node *temp2 = GetNewNode(x);
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = temp2;
    temp2->prev= temp;
    
}
void print()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;

    }
    cout<<"\n";
}

int main()
{
    head = NULL;
    InsertAtHead(2);
    print();
    InsertAtHead(4);
    print();
    InsertAtHead(6);
    print();
    InsertAtEnd(8);
    print();
    InsertAtEnd(10);
    print();
    
}