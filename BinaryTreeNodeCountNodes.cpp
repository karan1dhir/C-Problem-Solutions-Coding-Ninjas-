#include<iostream>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *takeInput()
{

    int data;
    cin>>data;
    if(data==-1)
        return NULL;

    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(data);
    root->left=takeInput();
    root->right=takeInput();

    return root;
}
// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
void printNodes(BinaryTreeNode<int> *root)
{

    if(root==NULL)
        return;

    cout<<root->data<<" :";

    if(root->left!=NULL)
        cout<<root->left->data<<" ," ;

    if(root->right!=NULL)
        cout<<root->right->data;

    cout<<endl;
    printNodes(root->left);
    printNodes(root->right);
}
int countNodes(BinaryTreeNode<int> *root){


  if(root==NULL)
     return 0;


  int leftcount=countNodes(root->left);
  int rightcount=countNodes(root->right);

  return leftcount+rightcount+1;
}
int main()
{
    cout<<"Enter the data:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    int count=countNodes(root);
    cout<<count;
}

