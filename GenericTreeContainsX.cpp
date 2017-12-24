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
bool genericTreeContainX(TreeNode<int> *root,int x)
{


    bool ans=false;
    for(int i=0; i<root->numChildren(); i++)
    {
        bool b=genericTreeContainX(root->getChild(i),x);
        if(b)
        {
            ans=true;
        }
    }
    if(root->data==x)
        ans=true;

    return ans;

}
int main()
{

    TreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    bool b=genericTreeContainX(root,3);
    cout<<b;
    return 0;
}
