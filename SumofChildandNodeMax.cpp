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

int sumOfNodesHelper(TreeNode<int> *root)
{

    int ans=root->data;
    for(int i=0; i<root->numChildren(); i++)
    {

        ans=ans+(root->getChild(i))->data;
    }
    return ans;

}
TreeNode<int> *NodeHavingChildrenandNodeisMax(TreeNode<int> *root)
{

    TreeNode<int> *ansNode=root;
    int ans=root->data;
    for(int i=0; i<root->numChildren(); i++)
    {

        ans=ans+(root->getChild(i))->data;
    }

    int smallAns=0;
    for(int i=0; i<root->numChildren(); i++)
    {

        TreeNode<int> *node=NodeHavingChildrenandNodeisMax(root->getChild(i));
        int smallAns=sumOfNodesHelper(node);

        if(smallAns>ans)
        {
            ans=smallAns;
            ansNode=node;
        }
    }
    return ansNode;
}
int main()
{
    TreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    TreeNode<int> *max=NodeHavingChildrenandNodeisMax(root);
    cout<<max->data;
    return 0;
}
