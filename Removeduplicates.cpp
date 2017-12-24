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
        else{
        tail->next=newnode;
        tail=newnode;
     }

        cin>>data;
    }
    return head;
}
//11 11 23 23 23 6 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
Node *removeDuplicates(Node *head)
{
 Node *temp=head;
 Node *temp1=NULL;
 while(temp->next!=NULL){

    if(temp->data==temp->next->data){

     temp1=temp->next;
     temp->next=temp1->next;
     delete(temp1);
    }
    else{
        temp=temp->next;
    }
  }
  return head;
}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    head=removeDuplicates(head);
    cout<<endl;
    Traversal(head);
}
