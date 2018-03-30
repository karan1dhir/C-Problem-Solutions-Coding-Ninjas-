#include<iostream>
#include "Node.h"
using namepace std;

class Pair{

Node *head;
Node *tail;

};
Pair reverseLinkedList(Node *head){

if(head==NULL || head->next==NULL){

    Pair ans;
    ans.head=head;
    ans.tail=head;
    return ans;
}

Pair smallOutput=reverseLinkedList(head->next);
smallOutput.tail->next=head;
head->next=NULL;
Pair ans;
ans.head=smallOutput.head;
ans.tail=head;
return ans;
}

