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
//1 2 3 4 5 6 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
Node *ReverseLinkedListRecursive(Node *head)
{

    if(head->next==NULL)
        return head;

    Node *temp=head->next;
    Node* headupdate=ReverseLinkedListRecursive(head->next);
    temp->next=head;
    head->next=NULL;

    return headupdate;

}
bool CheckPalindrome(Node *head)
{

    int count=0,size=0,flag=0;
    Node *mid_link=NULL;
    Node *temp=head;
    while(temp!=NULL)
    {
        size++;
        temp=temp->next;
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
    Node *reverse=ReverseLinkedListRecursive(mid_link->next);
    mid_link->next=NULL;

    temp=head;
    while(reverse!=NULL)
    {

        if(reverse->data==temp->data)
            flag=0;
        else
        {
            flag=1;
            break;
        }
        temp=temp->next;
        reverse=reverse->next;
    }
    if(flag==0)
        return true;
    else
        return false;
}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    bool check=CheckPalindrome(head);
    cout<<check;
}

