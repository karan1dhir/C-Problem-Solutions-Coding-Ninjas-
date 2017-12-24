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
// 1 2 3 4 5 6 -1
Node *InsertInLinkedList(Node *head,int pos,int data)
{

    int count=0;
    Node *temp=head;
    if(pos==0)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(temp!=NULL)
    {
        if(count==pos-1)
        {
            Node *newnode=new Node(data);
            newnode->next=temp->next;
            temp->next=newnode;
            break;
        }
        else
        {
            temp=temp->next;
            count++;
        }
    }
    return head;
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
 head=InsertInLinkedList(head,0,10);
 Traversal(head);

}
