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
Node *ReverseLinkedListInGroups(Node *head,int k)
{

    Node *current=head,*prev=NULL,*next=NULL,count=0;
    while(count<k && current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    Node *temp=ReverseLinkedListInGroups(next,k);
    head->next=temp;
    return prev;

}
    int main()
  {
    int k;
    cout<<"enter the value of k";
    cin>>k;
    Node *head=takeInput();
    head=ReverseLinkedListInGroups(head,k);
    Traversal(head);
    return 0;
}






