#include "TrieNode.h"
#include <cstring>
class Trie{


    TrieNode *root;
    public:
    Trie(){
     root=new TrieNode('\0');
    }

    void insertWord(string word,TrieNode *root){

      if(word.size()==0){
        root->isTerminal=true;
        return root;
      }
      int index=word[0]-'a';
      TrieNode *child;
      if(root->children[index]!=NULL){
        child=root->children[index];
      }
      else{
        child=new TrieNode(word[0]);
        root->children[index]=child;
      }
      insertWord(child,substr(1));
    }
    void insertWord(string word){
     insertWord(word,root);
    }
     bool search(string word){
      return search(word,root);
    }

    bool search(string word,TrieNode *root) {

      if(word.size()==0){
        return root->isTerminal;
      }

      int index=word[0]-'a';
      TrieNode *child;
      if(root->children[index]!=NULL){
        child=root->children[index];
      }
      else{
        return false;
      }
      return search(word.substr(1),child);
    }

    void removeWord(TrieNode *root,string word){

     if(word.size()==0){
        root->isTerminal=false;
        return;
     }
      int Index=word[0]='a';
      TrieNode *child;
      if(root->children[Index]!=NULL){
        child=root->children[Index];
      }
      else{
        return;
      }
      removeWord(child,word.substr(1));

     if(child->isTerminal==false){
        for(int i=0;i<26;i++){
            if(child->children[i]!=NULL){
                return;
            }
        }
        delete child;
        root->children[index]=NULL;
     }
    }
    void removeWord(string word){
     removeWord(root,word);
    }
};
