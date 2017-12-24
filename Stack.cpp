#include<iostream>
using namespace std;
template<typename T>
class Node<T>
{

    T value;
    Node *next;

    Node(int value)
    {
        this.value=value;
        next=NULL;
    }
};

class Mystack<T>
{

    void push(T data)
    {
        Node *node=new Node(data);
        node->next=head;
        head=node;
    }
    T pop()
    {
        T data=head->data;
        Node *node=new Node();
        node=head;
        head=head->next;
        delete(node);
        return data;
    }
    bool isEmpty(){

    if(top==-1)



    }

};
