#include<iostream>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *takeInput()
{

    int data;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

    root -> left = takeInput();
    root -> right = takeInput();

    return root;

}
// 1 2 3 -1 20 5 -1 -1 -1 -1 6 -1 -1
void printNodes(BinaryTreeNode<int> *root){

  if(root == NULL) {
        return;
    }
    cout << root -> data << " : ";
    if(root -> left != NULL) {
        cout << root -> left -> data ;
    }
    cout  << ",  ";

    if(root -> right != NULL) {
      cout << root -> right -> data;
    }
    cout << endl;

    printNodes(root -> left);
    printNodes(root -> right);
}
BinaryTreeNode<int> *findMaxNode(BinaryTreeNode<int> *root){


  if(root==NULL)
     return NULL;

  int maximum=root->data;
  BinaryTreeNode<int>* leftnode=findMaxNode(root->left);
  BinaryTreeNode<int>* rightnode=findMaxNode(root->right);


 if(leftnode!=NULL && rightnode!=NULL){
    if(leftnode->data>maximum && leftnode->data>rightnode->data)
        return leftnode;
    if(rightnode->data>maximum && rightnode->data>leftnode->data)
            return rightnode;
    return root;
 }

 else if(leftnode!=NULL && rightnode==NULL)
 {
     if(leftnode->data>maximum)
     return leftnode;
     else
    return root;
 }
 else if(rightnode!=NULL && leftnode==NULL){

    if(rightnode->data>maximum)
        return rightnode;
    else
        return root;
 }
  else if(leftnode==NULL && rightnode==NULL)
    return root;
 }
int main()
{
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    BinaryTreeNode<int> *node=findMaxNode(root);
    cout<<endl;
    cout<<node->data;
}

