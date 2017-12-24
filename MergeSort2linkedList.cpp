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
        else
        {
            tail->next=newnode;
            tail=newnode;
        }

        cin>>data;
    }
    return head;
}
//6 5 4 3 2 1 -1
Node* Merging2SortedLinkedList(Node *head1,Node *head2)
{

    Node *temp=NULL;
    Node *tail=NULL;

    while(head1!=NULL && head2!=NULL)
    {

        if(head1->data>=head2->data)
        {

            Node *newnode=new Node(head2->data);

            if(temp==NULL)
            {

                temp=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
            head2=head2->next;
        }
        else if(head1->data<=head2->data)
        {

            Node *newnode=new Node(head1->data);

            if(temp==NULL)
            {

                temp=newnode;
                tail=newnode;
            }
            else
            {

                tail->next=newnode;
                tail=newnode;
            }
            head1=head1->next;
        }
    }

    if(head1!=NULL)
    {

        while(head1!=NULL)
        {

            Node *newnode=new Node(head1->data);
            tail->next=newnode;
            tail=newnode;
            head1=head1->next;
        }
    }
    else
    {
        while(head2!=NULL)
        {

            Node *newnode=new Node(head2->data);
            tail->next=newnode;
            tail=newnode;
            head2=head2->next;
        }
    }
    return temp;
}
Node *Merge2sortedLinkedList(Node *head)
{

   if(head==NULL || head->next==NULL)
     return head;

    int size=0,count=0;
    Node *temp=head;
    Node *ahead1=head;
    Node *mid_link=NULL;
    while(temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    int mid=(size-1)/2;
    temp=head;
    while(temp!=NULL)
    {

        if(count==mid)
        {
            mid_link=temp;
            break;
        }
        else
        {
            count++;
            temp=temp->next;
        }
    }
    Node *ahead2=mid_link->next;
    mid_link->next=NULL;

    Node *first=Merge2sortedLinkedList(ahead1);
    Node *second=Merge2sortedLinkedList(ahead2);

    return Merging2SortedLinkedList(first,second);
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
    head=Merge2sortedLinkedList(head);
    Traversal(head);
}

