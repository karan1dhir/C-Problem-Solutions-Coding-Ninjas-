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
bool SearchAnElementRecursive(Node *head,int data)
{
 if(head==NULL)
    return false;
   if(head->data==data)
     return true;

   else
     return SearchAnElementRecursive(head->next,data);

}
int main()
{

    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    int data=5;
    bool b=SearchAnElementRecursive(head,data);
    cout<<b;
}
