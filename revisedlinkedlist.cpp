#include<iostream>
using namespace std;
#include "Node.h";

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
// 1 2 3 4 5 -1
Node *ReverseLinkedListRecursive(Node *head){


if(head->next==NULL)
    return head;

Node *temp=head->next;
Node *headupdate=ReverseLinkedListRecursive(head->next);
temp->next=head;
head->next=NULL;

return headupdate;
}
void Traversal(Node *head){

 while(head!=NULL){

    cout<<head->data<<" ";
    head=head->next;
 }
}
void TraverseRecursive(Node *head){

if(head==NULL)
    return;

TraverseRecursive(head->next);
cout<<head->data<<" " ;
}
int main(){

Node *head=takeInput();
Traversal(head);
cout<<endl;
TraverseRecursive(head);
Node *headupdate=ReverseLinkedListRecursive(head);
cout<<endl;
Traversal(headupdate);
}



