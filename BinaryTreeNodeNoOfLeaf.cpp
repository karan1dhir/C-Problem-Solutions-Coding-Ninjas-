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
 int NoOfLeafNodes(BinaryTreeNode<int> *root){

   if(root==NULL)
        return 0;

 int leftCount=NoOfLeafNodes(root->left);
 int rightCount=NoOfLeafNodes(root->right);
 int ans=leftCount+rightCount;

 if(root->left==NULL && root->right==NULL)
    return ans+1;
 else
    return ans;
 }
int main()
{
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    int count=NoOfLeafNodes(root);
    cout<<endl;
    cout<<count;
}

