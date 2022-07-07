//Inserting the node at beginning
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head;
void Insert(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void Print()
{
    node* temp = head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<< temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}

int main()
{
    head = NULL;
    int n,x;
    cout<<"How many numbers?\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the numbers";
        cin>>x;
        Insert(x);
        Print();
    }


}

