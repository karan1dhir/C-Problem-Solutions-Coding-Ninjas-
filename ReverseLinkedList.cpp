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
Node *ReverseLinkedListRecursive(Node *head){

if(head->next==NULL)
    return head;

Node *temp=head->next;
Node* headupdate=ReverseLinkedListRecursive(head->next);
temp->next=head;
head->next=NULL;

return headupdate;

}
Node *ReverseLinkedListIterative(Node *head)
{

    Node *next=NULL,*prev=NULL,*current=head;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    head=ReverseLinkedListRecursive(head);
    Traversal(head);
}
