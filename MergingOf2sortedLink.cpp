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
//2 5 6 7 10 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
Node* Merge2SortedLinekedList(Node *head1,Node *head2){

 Node *temp=NULL;
 Node *tail=NULL;

while(head1!=NULL && head2!=NULL){

  if(head1->data>=head2->data){

     Node *newnode=new Node(head2->data);

     if(temp==NULL){

        temp=newnode;
        tail=newnode;
     }
     else{
       tail->next=newnode;
       tail=newnode;
     }
     head2=head2->next;
  }
  else if(head1->data<=head2->data){

    Node *newnode=new Node(head1->data);

    if(temp==NULL){

        temp=newnode;
        tail=newnode;
    }
    else{

     tail->next=newnode;
     tail=newnode;
    }
    head1=head1->next;
  }
 }

  if(head1!=NULL){

  while(head1!=NULL){

    Node *newnode=new Node(head1->data);
    tail->next=newnode;
    tail=newnode;
    head1=head1->next;
  }
}
else{
    while(head2!=NULL){

     Node *newnode=new Node(head2->data);
     tail->next=newnode;
     tail=newnode;
     head2=head2->next;
    }
  }
  return temp;
}
int main()
{

    Node *head1=takeInput();
    Node *head2=takeInput();
    Traversal(head1);
    cout<<endl;
    Traversal(head2);
    cout<<endl;
    Node *head3=Merge2SortedLinekedList(head1,head2);
    Traversal(head3);
}
