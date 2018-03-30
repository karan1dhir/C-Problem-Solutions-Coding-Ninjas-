
#include<iostream>
#include<climits>
using namespace std;
#include "TreeRevisedNode.h"

TreeNode<int> *takeInput()
{

    int data;
    cin>>data;
    TreeNode<int> *root=new TreeNode<int>(data);
    int n;
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
// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
bool structurallyIdentical(TreeNode<int> *root1,TreeNode<int> *root2){



   if(root1->data!=root2->data || root1->numChildren()!=root2->numChildren())
    return false;


   for(int i=0;i<root1->numChildren();i++){


    bool b=structurallyIdentical(root1->getChild(i),root2->getChild(i));
    if(b==false)
        return false;
        else
            return true;
   }
}
int main()
{
    cout<<"enter the data of root:";
    TreeNode<int> *root1=takeInput();
    cout<<"enter the data of root:";
    TreeNode<int> *root2=takeInput();
    printNodes(root1);
    cout<<endl;
    printNodes(root2);
    cout<<endl;
    bool b=structurallyIdentical(root1,root2);
    cout<<b;
    return 0;
}
