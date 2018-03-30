#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
#include "BinaryTreeNode1.h"

void printLevelWise(BinaryTreeNode1<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

  queue<BinaryTreeNode1<int> *> pendingNodes;
  pendingNodes.push(root);

  while(pendingNodes.size()!=0){

    BinaryTreeNode1<int> *front=pendingNodes.front();
    cout<<front->data<<":";

    if(front->leftnode!=NULL){
      cout<<"L:"<<front->leftnode->data<<",";
      pendingNodes.push(front->leftnode);
    }
    if(front->rightnode!=NULL){
      cout<<"R:"<<front->rightnode->data;
      pendingNodes.push(front->rightnode);
    }
  cout<<endl;
  pendingNodes.pop();
  }
}
BinaryTreeNode1<int> *takeInputLevelWise(){

   int data;
   cout<<"Enter rootdata:";
   cin >> data;

   BinaryTreeNode1<int> *root = new BinaryTreeNode1<int>(data);
   queue<BinaryTreeNode1<int> *>pendingNodes;
   pendingNodes.push(root);
   while(pendingNodes.size()!=0){

      BinaryTreeNode1<int> *front=pendingNodes.front();
      pendingNodes.pop();
      cout<<"Enter left child of "<<front->data<<endl;
      int leftchild;
      cin>>leftchild;
      if(leftchild!=-1){
         BinaryTreeNode1<int> *leftnodechild=new  BinaryTreeNode1<int>(leftchild);
         front->leftnode=leftnodechild;
         pendingNodes.push(leftnodechild);
      }
       cout<<"Enter right child of "<<front->data<<endl;
      int rightchild;
      cin>>rightchild;
      if(rightchild!=-1){
         BinaryTreeNode1<int> *rightnodechild=new  BinaryTreeNode1<int>(rightchild);
         front->rightnode=rightnodechild;
         pendingNodes.push(rightnodechild);
      }
   }
   return root;
}
BinaryTreeNode1<int> *takeInput(){

    int data;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    BinaryTreeNode1<int> *root = new BinaryTreeNode1<int>(data);

    root -> leftnode = takeInput();
    root -> rightnode = takeInput();

    return root;
}
// 1 2 -1 -1 3 -1 -1
void printTree(BinaryTreeNode1<int> *root){

  if(root==NULL){
    return;
  }
  cout<<root->data<<":";

  if(root->leftnode!=NULL){

  cout<<"L"<<root->leftnode->data<<" ";
  }

  if(root->rightnode!=NULL){
  cout<<"R"<<root->rightnode->data;
  }
  cout<<endl;
  printTree(root->leftnode);
  printTree(root->rightnode);
}

 int maximum(BinaryTreeNode1<int> *root){

  if(root==NULL){
    return INT_MIN;
  }

   return max(root->data,max(maximum(root->leftnode),maximum(root->rightnode)));

 }
 int minimun(BinaryTreeNode1<int> *root){

  if(root==NULL){
    return INT_MAX;
  }

   return min(root->data,min(minimun(root->leftnode),minimun(root->rightnode));
 }
 bool isBST(BinaryTreeNode1<int> *root){


 if(root==NULL){
    return true;
 }

 int leftans=maximum(root->left);
 int rightans=minimum(root->right);

 bool ans=(root->data>leftans && root->data<=rightans) &&  isBST(root->leftnode) && isBST(root->rightnode);
 return ans;

}

int CountNodes(BinaryTreeNode1<int> *root){

   if(root==NULL)
        return 0;


  int leftcount=CountNodes(root->leftnode);
  int rightcount=CountNodes(root->rightnode);
  return leftcount+rightcount+1;

}
  int height(BinaryTreeNode1<int> *root){

   if(root==NULL)
   return 0;

   int leftans=height(root->leftnode);
   int rightans=height(root->rightnode);

    return max(leftans,rightans)+1;
  }
 pair<int,int>heightDiameter(BinaryTreeNode1<int> *root){

  if(root==NULL){
    pair<int,int>p;
    p.first=0;
    p.second=0;
    return p;
  }

 pair<int,int> leftans=heightDiameter(root->leftnode);
 pair<int,int> rightans=heightDiameter(root->rightnode);

  pair<int,int> ans;
  ans.first=max(leftans.first,rightans.first)+1;
  ans.second=max(leftans.first+rightans.first,max(leftans.second,rightans.second));

  return ans;

 }
 class isBSTreturn {

  public:
      bool isBst;
      int maximum;
      int minimum;
 };

isBSTreturn isBst2(BinaryTreeNode1<int> *root){

 if(root==NULL){

    isBSTreturn ans;
    ans.isBst=true;
    ans.maximum=INT_MIN;
    ans.minimum=INT_MIN;
    return ans;
 }

  isBSTreturn leftans=isBst2(root->leftnode);
  isBSTreturn rightans=isBst2(root->right);

  isBSTreturn ans;
  ans.minimum=min(root->data,min(leftans.minimum,rightans.minimum));
  ans.maximum=max(root->data,max(leftans.maximum,rightans.maximum));
  ans.isBst=(root->data>ans.maximum && root->data<ans.minimum) && leftans.isBst && rightans.isBst;
  return ans;
}

 int diameterOfTree(BinaryTreeNode1<int> *root){

   if(root==NULL)
    return 0;


  int rootdia=height(root->leftnode)+height(root->rightnode)+1;
  int leftdia=diameterOfTree(root->leftnode);
  int rightdia=diameterOfTree(root->rightnode);

  return max(rootdia,max(leftdia,rightdia));

 }
 bool isBst3(BinaryTreeNode<int> *root,int min=INT_MIN,int max=INT_MAX){

  if(root==NULL)
    return true;

  if(root->data<min || root->data>max)
    return false;

  bool isLeftOk=isBst3(root->left,min,root->data-1);
  bool isrightOk=isBst3(root->right,root->data,max);

  if(isLeftOk && isrightOk)
    return true;

  return false;
}
int main(){

 BinaryTreeNode1<int> *root=takeInputLevelWise();
 printLevelWise(root);
 pair<> p=heightDiameter(root);
 cout<<p.second;
}
