template<typename T>
class TreeNode
{
    TreeNode<T> **children;
    int capacity;
    int childcount;

public:

    T data;

    TreeNode(T data)
    {
        this->data=data;
        children=new TreeNode<T>*[5];
        childcount=0;
        capacity=5;
    }

    int numChildren()
    {
        return childcount;
    }
    void addChild(TreeNode<T> *child)
    {

        children[childcount]=child;
        childcount++;
    }
    TreeNode<T> * getChild(int i)
    {

        return children[i];

    }
    void setChild(int i,TreeNode<T> *child)
    {
        children[i]=child;
    }
};
