#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void Insert(int data, int n);
void Print();
node* head;
int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
} 
void Insert(int data,int n)
{
    node* temp = new node();
    temp-> data = data;
    temp-> next = NULL;
    if(n==1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    node* temp1 = head;
    for(int i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1-> next = temp;
}
void Print()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
}