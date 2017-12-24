#include<iostream>
using namespace std;
#include "Node.h"

Node *takeInput()
{
    int data;
    cin>>data;

    Node *head=NULL,*tail=NULL;
    while(data!=-1)
    {
        Node *newnode=new Node(data);

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;

        cin>>data;
    }
    return head;
}
//1 2 3 4 5 6 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
void PrintMiddle(Node *head){

Node *slow=head;
Node *fast=head->next;

while(fast!=NULL && fast->next!=NULL){

 slow=slow->next;


 fast=fast->next->next;
 }
 cout<<slow->data;

}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    PrintMiddle(head);
}
