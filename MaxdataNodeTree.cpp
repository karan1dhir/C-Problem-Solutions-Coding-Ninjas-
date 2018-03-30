#include<iostream>
#include<climits>
using namespace std;
#include "TreeRevisedNode.h"

TreeNode<int> *takeInput()
{

    int data;
    cout<<"enter the data of root:";
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    int n;
    cout<<"Enter no of children "<<root->data<<" :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        TreeNode<int> *child=takeInput();
        root->addChild(child);
    }
    return root;
}
void printNodes(TreeNode<int> *root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" :";
    for(int i=0; i<root->numChildren(); i++)
    {
        cout<<root->getChild(i)->data<<" ,";
    }
    cout<<endl;
    for(int i=0; i<root->numChildren(); i++)
    {
        TreeNode<int> *child=root->getChild(i);
        printNodes(child);

    }
}
TreeNode<int> *maxDataNode(TreeNode<int> *root)
{

   if(root==NULL)
      return NULL;


 int max=INT_MIN;
 TreeNode<int> *nodemax;

 for(int i=0;i<root->numChildren();i++){

    TreeNode<int> *node=root->getChild(i);

    if(max<node->data){

        max=node->data;
        nodemax=node;
    }
 }
 if(root->data>nodemax->data){
    return root;
 }
 else{
    return nodemax;
 }
}

//60 3 20 30 40 2 40 50 0 0 0 0
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    if(root==NULL)
      return NULL;

    TreeNode<int> *max;
    int maxData=INT_MIN;

   for(int i=0;i<root->children.size();i++){

     TreeNode<int> *smallOutput=maxDataNode(root->children[i]);
     if(smallOutput->data>maxData){

       maxData=smallOutput->data;
       max=smallOutput;
     }
   }
  if(root->data>max->data)
    return root;
  else
    return max;
}


int main()
{

    TreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    TreeNode<int> *temp=maxDataNode(root);
    cout<<temp->data;
    return 0;
}
