#include<iostream>
#include<climits>
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
//1 2 4 -1 -1 -1 3 -1 -1
 BinaryTreeNode* takeInput(){

 int data;
 cin>>data;

 if(data==-1)
    return NULL;

 BinaryTreeNode *root=new BinaryTreeNode(data);
 root->leftchild=takeInput();
 root->rightchild=takeInput();

 return root;
 }
int height(BinaryTreeNode *root){

 if(root==NULL)
    return 0;

 int leftHeight=height(root->leftchild);
 int rightHeight=height(root->rightchild);

 return max(leftHeight,rightHeight)+1;
}
 int diameter(BinaryTreeNode *root){

  if(root==NULL)
    return 0;


 int d1=height(root->leftchild)+height(root->rightchild)+1;
 int d2=diameter(root->leftchild);
 int d3=diameter(root->rightchild);

 return max(d1,max(d2,d3));

 }
 void print(BinaryTreeNode *root){


  if(root==NULL)
    return;

  cout<<root->data<<" :" ;

  if(root->leftchild!=NULL)
    cout<<root->leftchild->data<<" ,";

  if(root->rightchild!=NULL)
    cout<<root->rightchild->data;

    cout<<endl;

   print(root->leftchild);
   print(root->rightchild);

 }
int sumoFNodes(BinaryTreeNode *root){

 if(root==NULL)
    return 0;


 int leftsum=sumoFNodes(root->leftchild);
 int rightsum=sumoFNodes(root->rightchild);
 return leftsum+rightsum+root->data;
}
int LeafNodes(BinaryTreeNode *root){


  if(root==NULL)
    return 0;

  int left=LeafNodes(root->leftchild);
  int right=LeafNodes(root->rightchild);

  if(root->leftchild==NULL && root->rightchild==NULL)
  return left+right+1;
  else
    return left+right;
}
int nodesGreaterThanX(BinaryTreeNode *root){









}
int main(){

 BinaryTreeNode *root=takeInput();
 int heigh=height(root);
 print(root);
 int dia=diameter(root);
 cout<<dia<<endl;
 int sum=sumoFNodes(root);
 cout<<sum<<endl;
 int leafNodes=LeafNodes(root);
 cout<<leafNodes;
}



