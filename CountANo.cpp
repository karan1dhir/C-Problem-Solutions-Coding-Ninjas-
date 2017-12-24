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
//1 2 3 1 5 1 -1
void Traversal(Node *head)
{

    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
int CountNoOfTimes(Node *head,int data){

int count=0;

while(head!=NULL){

 if(head->data==data){
    count++;
    head=head->next;}
 else{
    head=head->next;
  }
 }
 return count;
}
int CountNoOfTimesRecursive(Node *head,int data){

 if(head==NULL)
    return 0;

 int count=CountNoOfTimesRecursive(head->next,data);
 if(head->data==data)
    return count+1;
 else
    return count;
}
int main()
{

    int data=1;
    Node *head=takeInput();
    Traversal(head);
    cout<<endl;
    int count=CountNoOfTimes(head,data);
    int count1=CountNoOfTimesRecursive(head,data);
    cout<<count<<endl;
    cout<<count1;
}
