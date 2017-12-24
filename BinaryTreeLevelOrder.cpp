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
int height(BinaryTreeNode<int> *root)
{
   if(root==NULL)
       return 0;

  int leftheight=height(root->left);
  int rightheight=height(root->right);

    if(leftheight>=rightheight)
            return leftheight+1;
        else
            return rightheight+1;
}
void nodesAtdepthK(BinaryTreeNode<int> *root,int k){
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    if(root->left!=NULL)
    nodesAtdepthK(root->left,k-1);
    if(root->right!=NULL)
    nodesAtdepthK(root->right,k-1);
}
void levelOrder(BinaryTreeNode<int> * root) {

 if(root==NULL)
     return;

int k=height(root);
for(int i=0;i<=k;i++){
nodesAtdepthK(root,i);
 }
}
int main()
{
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    levelOrder(root);
}
