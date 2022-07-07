#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head;
void reverse(){
    //head = NULL;
    node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;

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
int main()
{
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print();
    reverse();
    print();
}