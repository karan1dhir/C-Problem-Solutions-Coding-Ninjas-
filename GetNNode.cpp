#include<iostream.h>
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
int getNNode(Node *head,int n)
{

    int count=0;
    int data=-1;
    Node *temp=head;

    while(temp!=NULL)
    {

        if(count==n)
        {
            data=temp->data;
            return data;
        }
        else
        {
            count++;
            temp=temp->next;
        }
    }
    if(data==-1)
        return -1;
}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    int data= getNNode(head,2);
    cout<<data;
}

