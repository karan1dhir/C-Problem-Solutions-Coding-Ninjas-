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
int countNodes(Node *head){

 if(head==NULL)
    return 0;

 int count=countNodes(head->next);
 return count+1;
}


int main(){

 Node *node=takeInput();
 int nodes=countNodes(node);
 cout<<nodes;
}

