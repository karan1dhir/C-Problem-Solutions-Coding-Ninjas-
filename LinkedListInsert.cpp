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
 Node *insertNode(Node *head,int pos,int data){

  if(pos==0){

    Node *newnode=new Node(data);
    newnode->next=head;
    head=newnode;
    return head;
  }

  Node *temp=head;
  int i=0;
  while(temp->next!=NULL){

   if(i==pos-1){

    Node *temp1=new Node(data);
    temp1=temp->next;
    temp->next=temp1;
    break;
   }
   else{
    temp=temp->next;
    i++;
   }
  }
  return head;
}
int main()
{
    Node *head=takeInput();
    Node *node=insertNode(head,2,10);
    traverse(node);
}
