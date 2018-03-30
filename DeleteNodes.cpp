#include<iostream>
using namespace std;


class Node{

public:
int data;
Node *next;

Node(int data){

this->data=data;
this->next=NULL;
 }
};

Node* takeInput(){

 int data;
 cin>>data;
 Node *head=NULL,*tail=NULL;

 while(data!=-1){

  Node *newnode=new Node(data);

  if(head==NULL){

    head=newnode;
    tail=newnode;
  }

   tail->next=newnode;
   tail=newnode;
   cin>>data;
 }
 return head;
}
 Node* deleteNode(Node *head,int i){

 Node *temp=head;
 int pos=0;
 if(i==0){

  temp=head;
  head=head->next;
  delete(temp);
  return head;
 }

  while(temp->next!=NULL){

    if(pos==i-1){

     Node *temp1=temp->next;
     temp->next=temp1->next;
     delete(temp1);
     break;
     }
     else{
      temp=temp->next;
      pos++;
     }
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
int main(){

 Node *node=takeInput();
 Node *node1=deleteNode(node,3);
 traverse(node1);
}

