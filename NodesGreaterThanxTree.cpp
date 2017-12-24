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
int nodesGreaterThanX(TreeNode<int> *root,int x){


if(root==NULL)
    return 0;
int ans=0;
for(int i=0;i<root->numChildren();i++){

    int value=nodesGreaterThanX(root->getChild(i),x);
    ans=ans+value;
}
if(root->data>x)
    return ans+1;
else
    return ans;

}
int main()
{

    TreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    int count=nodesGreaterThanX(root,4);
    cout<<count;
    return 0;
}
