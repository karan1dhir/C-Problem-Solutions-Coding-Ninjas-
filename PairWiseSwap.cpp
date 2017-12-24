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
//1 2 3 4 5 6 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
Node *PairWiseSwap(Node *head){

Node *temp=head;
int data=0;
while(temp!=NULL && temp->next!=NULL)
{
  data=temp->data;
  temp->data=temp->next->data;
  temp->next->data=data;
  temp=temp->next->next;
  }
  return head;
}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    head=PairWiseSwap(head);
    cout<<endl;
    Traversal(head);
}

