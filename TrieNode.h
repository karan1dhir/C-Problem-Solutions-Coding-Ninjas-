
class TrieNode{

  public:
  char data;
  TrieNode **children;
  bool isTerminal

  TrieNode(int data){

   this->data=data;
   children=new TrieNode*[26];
   for(int i=0;i<26;i++)
    children[i]=NULL;

   isTerminal=false;
  }
};
