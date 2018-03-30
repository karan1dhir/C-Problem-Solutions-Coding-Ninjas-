#include<iostream>
#include<queue>
#include "TreeNode1.h"
using namespace std;


 TreeNode1<int> *takeInputLevelWise(){

 int rootData;
 cout<<"Enter the root data:";
 cin>>rootData;
 TreeNode1<int> *root=new TreeNode1<int>(rootData);
 queue<TreeNode1<int>*> pendingNodes;
 pendingNodes.push(root);

 while(pendingNodes.size()!=0){

  TreeNode1<int> *front=pendingNodes.front();
  pendingNodes.pop();
  cout<<"Enter the num of children of "<<front->data<<" :";
  int numChild;
  cin>>numChild;
  for(int i=0;i<numChild;i++){
    int childData;
    cout<<"Enter the "<<i<<"th child of"<<front->data;
    cin>>childData;
    TreeNode1<int> *child=new TreeNode1<int>(childData);
    front->children.push_back(child);
    pendingNodes.push(child);
  }
 }
 return root;
 }
TreeNode1<int> *takeInput(){

 int rootData;
 cout<<"Enter data:";
 cin>>rootData;
 TreeNode1<int> *root=new TreeNode1<int>(rootData);
 int n;
 cout<<"enter the children of :"<<rootData<<endl;
 cin>>n;

 for(int i=0;i<n;i++){
   TreeNode1<int> *child=takeInput();
   root->children.push_back(child);
 }
 return root;
}
void print(TreeNode1<int> *root){

if(root==NULL)
    return;

cout<<root->data<<" :";

for(int i=0;i<root->children.size();i++)
    cout<<root->children[i]->data<<",";

    cout<<endl;

for(int i=0;i<root->children.size();i++)
    print(root->children[i]);

}
int countNodes(TreeNode1<int> *root){


 if(root==NULL)
    return 0;

 int count=0;
 for(int i=0;i<root->children.size();i++)
    count=count+countNodes(root->children[i]);
return count+1;

}
void printLevelWise(TreeNode1<int>* root) {


queue<TreeNode1<int> *>pendingNodes;
pendingNodes.push(root);
while(pendingNodes.size()!=0){

  TreeNode1<int> *front=pendingNodes.front();
  for(int i=0;i<front->children.size();i++)
    pendingNodes.push(front->children[i]);
  pendingNodes.pop();
  cout<<front->data<<":";
  for(int i=0;i<front->children.size();i++){
    cout<<fro->children[i]->data;
   }
  cout<<endl;
  }
}
int main(){

 /*TreeNode1<int> *root=new TreeNode1<int>(1);
 TreeNode1<int> *node1=new TreeNode1<int>(2);
 TreeNode1<int> *node2=new TreeNode1<int>(3);
 root->children.push_back(node1);
 root->children.push_back(node2);
 */
 TreeNode1<int> *root=takeInputLevelWise();
 printLevelWise(root);
// int count=countNodes(root);
// cout<<count;
}
