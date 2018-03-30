template<typename T>
class BinaryTreeNode1{

 public:
     T data;
     BinaryTreeNode1 *leftnode;
     BinaryTreeNode1 *rightnode;

  BinaryTreeNode1(T data){
   this->data=data;
   this->leftnode=NULL;
   this->rightnode=NULL;
  }

  ~BinaryTreeNode1(){
   delete leftnode;
   delete rightnode;
  }
};
