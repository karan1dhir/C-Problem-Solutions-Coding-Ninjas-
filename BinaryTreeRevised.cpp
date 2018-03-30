#include<iostream>
#include<cmath>
using namespace std;

class BinaryTreeNode{

public:
int data;
BinaryTreeNode *leftchild;
BinaryTreeNode *rightchild;

BinaryTreeNode(int data){

  this->data=data;
  this->leftchild=NULL;
  this->rightchild=NULL;
 }
};

BinaryTreeNode *takeInput(){

 int data;
 cin>>data;

 if(data==-1)
    return NULL;


 BinaryTreeNode *root=new BinaryTreeNode(data);
 root->leftchild=takeInput();
 root->rightchild=takeInput();

 return root;

}

int heightOfTree(BinaryTreeNode *root){

 if(root==NULL)
    return 0;

  int leftHeight=heightOfTree(root->leftchild);
  int rightHeight=heightOfTree(root->rightchild);
  return max(leftHeight,rightHeight)+1;

}
int main(){

 BinaryTreeNode *root=takeInput();
 int height=heightOfTree(root);
 cout<<height;

}




