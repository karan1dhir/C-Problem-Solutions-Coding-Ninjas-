#include<iostream>
#include<process.h>
#include<climits>
#include "Node1.h"
using namespace std;

class Mystack
{
    Node1 *head;
    public:
        Mystack(){
        head=NULL;
        }
    void push(int data)
    {
        Node1 *node=new Node1(data);
        node->next=head;
        head=node;
    }
    int pop()
    {
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        int data=head->data;
        Node1 *node=head;
        head=head->next;
        delete(node);
        return data;
    }
    bool isEmpty(){

     if(head==NULL)
            return true;
     return false;
    }
    int topreturn(){

     if(isEmpty())
        return INT_MIN;
     return head->data;
    }
};
int main(){


  Mystack mystack;
  int choice;
  int ch;
  cout<<"Enter the choice"<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Empty"<<endl<<"4.Return Top"<<endl;

  while(choice!=0){

  cin>>choice;
   if(choice==1)
      {
      cout<<"Enter the element:";
      cin>>ch;
      mystack.push(ch);

   }
   else if(choice==2)
    {
    int poped=mystack.pop();
    if(poped!=INT_MIN)
    cout<<"The popped value is :"<<poped<<endl;

   }
   else if(choice==3)
   {
    bool b=mystack.isEmpty();
    if(b==true)
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

   }
   else if(choice==4)
   {
     int topped_value=mystack.topreturn();
     if(topped_value!=INT_MIN)
     cout<<"Value at top: "<<topped_value;
     else
        cout<<"Stack Empty";

   }
  }
}
