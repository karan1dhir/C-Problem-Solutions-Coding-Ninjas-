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
int LengthIterative(Node *head)
{

    Node *temp=head;
    int count=0;

    while(temp!=NULL)
    {

        count++;
        temp=temp->next;
    }
    return count;
}
int LengthRecursive(Node *head){

  if(head==NULL)
        return 0;

  int count=LengthRecursive(head->next);    
  return 1+count;
}
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
    int count=LengthRecursive(head);
    cout<<count;
}
