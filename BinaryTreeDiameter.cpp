#include<iostream>
#include<cmath>
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
// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
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
 int height(BinaryTreeNode<int> *root){

   if(root==NULL)
     return 0;

   int leftheight=height(root->left);
   int rightheight=height(root->right);

   return max(leftheight,rightheight)+1;

 }


 int diameterOfTree(BinaryTreeNode<int> *root){


  if(root==NULL)
     return 0;

  int d1=height(root->left)+height(root->right)+1;
  int d2=diameterOfTree(root->left);
  int d3=diameterOfTree(root->right);

  return max(d1,max(d2,d3));

 }
int main()
{
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    int diameter=diameterOfTree(root);
    cout<<endl;
    cout<<diameter;
}

