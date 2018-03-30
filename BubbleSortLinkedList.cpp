#include<iostream>
using namespace std;
class Node
{

public:

    int data;
    Node *next;

    Node(int data)
    {

        this->data=data;
        this->next=NULL;
    }
};
Node* takeInput()
{

    int data;
    Node *head=NULL,*tail=NULL;
    cin>>data;
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
void traverse(Node *head)
{

    while(head!=NULL)
    {

        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=takeInput();
    traverse(head);
}
#include<iostream>
using namespace std;
class Node
{

public:

    int data;
    Node *next;

    Node(int data)
    {

        this->data=data;
        this->next=NULL;
    }
};
Node* takeInput()
{

    int data;
    Node *head=NULL,*tail=NULL;
    cin>>data;
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
void traverse(Node *head)
{

    while(head!=NULL)
    {

        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=takeInput();
    traverse(head);
}
 Node BubbleSortIterative(Node *head){















 }








