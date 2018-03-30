#include<vector>
using namespace std;
template<typename T>
class TreeNode1{

public:
    T data;
    vector<TreeNode1<T>*>children;

    TreeNode1(T data){
    this->data=data;
    }
};
