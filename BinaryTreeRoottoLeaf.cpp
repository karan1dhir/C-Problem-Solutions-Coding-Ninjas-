#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int> *takeInput()
{

    int data;
    cin >> data;
    if(data == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

    root -> left = takeInput();
    root -> right = takeInput();

    return root;

}
// 1 2 3 -1 4 5 -1 -1 -1 -1 6 -1 -1
void printNodes(BinaryTreeNode<int> *root)
{

    if(root == NULL)
    {
        return;
    }
    cout << root -> data << " : ";
    if(root -> left != NULL)
    {
        cout << root -> left -> data ;
    }
    cout  << ",  ";

    if(root -> right != NULL)
    {
        cout << root -> right -> data;
    }
    cout << endl;

    printNodes(root -> left);
    printNodes(root -> right);
}
void rootToLeafPaths(BinaryTreeNode<int> *root,vector<int> &path)
{


    if(root == NULL)
    {
        return;
    }
    path.push_back(root -> data);
    if(root -> left == NULL && root -> right == NULL)
    {

            for(int i = 0; i < path.size(); i++)
            {
                cout << path[i] << " ";
            }
            cout << endl;

        path.pop_back();
        return;
    }

    rootToLeafPaths(root -> left, path);
    rootToLeafPaths(root -> right, path);
    path.pop_back();
}
int main()
{
    vector<int> v;
    cout<<"Enter the root:";
    BinaryTreeNode<int> *root=takeInput();
    printNodes(root);
    cout<<endl;
    rootToLeafPaths(root,v);
}

