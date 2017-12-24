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
Node *deletion(Node *head,int pos){

int count=0;

if(pos==0){

    Node *temp=head;
    head=head->next;
    delete(temp);
    return head;
}
  Node *temp=head;
  while(temp!=NULL){

  if(count==pos-1){

    Node *temp1=temp->next;
    temp->next=temp1->next;
    delete(temp1);
    return head;
  }
  else{
    count++;
    temp=temp->next;
  }
 }
}
// 1 2 3 4 5 6 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    head= deletion(head,2);
    Traversal(head);
}
