#include<iostream>
#include "Node.h"
using namespace std;

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

void traverse(Node *head){

 while(head!=NULL){

    cout<<head->data<<"->";
    head=head->next;
 }
}
Node *reverseLL(Node *head){

  if(head==NULL ||head->next==NULL)
    return head;

  Node *second=head->next;
  Node *headupdate=reverseLL(head->next);
  second->next=head;
  head->next=NULL;
  return headupdate;
}

int main(){

 Node *head=takeInput();
 traverse(head);
 cout<<endl;
 Node *head1=reverseLL(head);
 traverse(head1);
}
