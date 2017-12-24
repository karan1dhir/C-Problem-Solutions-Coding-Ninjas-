#include<iostream>
using namespace std;

BinaryTreeNode<int> *takeInput(){

int data;
cin>>data;

 if(data==-1)
    return NULL;

 BinaryTreeNode<int> *root=new BinaryTreeNode<int>(data);

 root->left=takeInput();
 root->right=takeInput();

 return root;
}

int main(){

BinaryTreeNode<int> *root=takeInput();


}
