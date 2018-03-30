#include "BinaryTreeNode1.h"
class BST{

 private:
     BinaryTreeNode1<int> *root;
 public:
    BST(){
    root=NULL;
    }

    private:
    bool hasDataHelper(int data,BinaryTreeNode1<int> *node){

      if(root==NULL)
        return false;

      if(node->data==data)
        return true;

      else if(node->data>data)
        return hasDataHelper(data,root->leftnode);

      else
        return hasDataHelper(data,root->rightnode);
    }
    BinaryTreeNode1<int>* insertHelper(int data,BinaryTreeNode1<int> *root){

     if(root==NULL){
        BinaryTreeNode1<int> *newnode=new BinaryTreeNode1<int>(data);
        return newnode;
     }
      if(root->data>data){
       root->left=insertHelper(data,root->leftnode);
     }
    else{
      root->right=insertHelper(data,root->rightnode);
    }
    return root;
}
   BinaryTreeNode1<int>* delete1Helper(int data,BinaryTreeNode1<int> *root){

     if(root==NULL)
        return NULL;


     if(root->data>data){
       root->leftnode=delete1Helper(data,root->leftnode);
     }
     else if(root->data<data){
       root->rightnode=delete1Helper(data,root->rightnode);
     }
     else{
           if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->leftnode!=NULL && root->rightnode==NULL){

            BinaryTreeNode1<int> *temp=root->leftnode;
            root->leftnode=NULL;
            delete root;
            return temp;
        }
        else if(root->right!=NULL && root->left==NULL){
            BinaryTreeNode1<int> *temp=root->rightnode;
            root->rightnode=NULL;
            delete root;
            return temp;
        }
        else{
            BinaryTreeNode1<int> *minnode=root->rightnode;
            while(minnode->leftnode!=NULL){
                minnode=minnode->leftnode;
            }
            int rightMin=minnode->data;
            root->data=rightMin;
            root->rightnode=delete1Helper(rightMin,root->rightnode);
        }
   }
 }
    public:
    void delete1(int data){
        return delete1Helper(data,root);
    }
    void insert(int data){
     this->root=insertHelper(data,root);
    }
    bool hasData(int data){
     return hasDataHelper(data,root);
    }
};
