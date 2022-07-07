#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
    int data;
    node* next;
};
node* head ;
void insert(int x);
void print();
void del(int n);

int main()
{
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);
    print();
    
    int n;
    cout<<"Enter a position";
    cin>>n;
    del(n);
    print();
}
void insert(int x)
{
    node* temp = new node();
    temp -> data = x;
    temp -> next = head;
    head = temp;
}
void print()
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

void del(int n)
{ 
    node* temp1 = head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
        node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }

}

    