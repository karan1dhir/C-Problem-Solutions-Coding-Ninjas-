#include<iostream>
using namespace std;
#include "TreeRevisedNode.h"


TreeNode<int> *takeInput()
{

    int data,n;
    cout<<"Enter the root data:";
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    cout<<"Enter no of Children of "<<root->data<<" :";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        TreeNode<int> *child=takeInput();
        root->addChild(child);
    }
    return root;
}
void printTree(TreeNode<int> *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" : ";

    for(int i=0; i<root->numChildren(); i++)
    {
        cout<<root->getChild(i)->data<<",";
    }
    cout<<endl;
    for(int i=0; i<root->numChildren(); i++)
    {

        TreeNode<int> *child=root->getChild(i);
        printTree(child);
    }
}
int getHeight(TreeNode<int> *root){

if(root==NULL)
    return 0;

int ans=0;

for(int i=0;i<root->numChildren();i++){

    int smallHeight=getHeight(root->getChild(i));
    if(smallHeight>ans)
        ans=smallHeight;
}
return ans+1;
}

int main()
{
    TreeNode<int> *root=takeInput();
    printTree(root);
    cout<<endl;
    int height=getHeight(root);
    cout<<height;
}
