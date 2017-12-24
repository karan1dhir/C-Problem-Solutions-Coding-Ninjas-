
#include<iostream>
#include<cmath>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *takeInput()
{

    int data;
    cin >> data;
    if(data == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

    root -> left = takeInput();
    root -> right = takeInput();

    return root;

}
// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
void printNodes(BinaryTreeNode<int> *root){

  if(root == NULL) {
        return;
    }
    cout << root -> data << " : ";
    if(root -> left != NULL) {
        cout << root -> left -> data ;
    }
    cout  << ",  ";

    if(root -> right != NULL) {
      cout << root -> right -> data;
    }
    cout << endl;

     printNodes(root -> left);
    printNodes(root -> right);
}
 int height(BinaryTreeNode<int> *root){

   if(root==NULL)
     return 0;

   int leftheight=height(root->left);
   int rightheight=height(root->right);

   return max(leftheight,rightheight)+1;

 }
class Pair{

  public:
      int diameter;
      int height;

    Pair(int diameter,int height){

      this->diameter=diameter;
      this->height=height;
    }

};

 Pair diameterOfTreeBetter(BinaryTreeNode<int> *root){

    if(root==NULL){
        Pair ans(0,0);
        return ans;
    }

  Pair left=diameterOfTreeBetter(root->left);
  Pair right=diameterOfTreeBetter(root->right);


  int h=max(left.height,right.height)+1;
  int dia= max(right.diameter,max(left.diameter,left.height+right.height+1));
  Pair ans(dia,h);
  return ans;
 }
int main()
{
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    Pair p=diameterOfTreeBetter(root);
    cout<<endl;
    cout<<p.diameter;
}

