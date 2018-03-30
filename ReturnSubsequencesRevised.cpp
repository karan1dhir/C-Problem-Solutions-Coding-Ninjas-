#include<iostream>
using namespace std;


int returnSubsequences(string input,string output[]){

if(input[0]=='\0'){
    output[0]="";
    return 1;
}
string smallString=input.substr(1);
int smallOutput=returnSubsequences(smallString,output);
for(int i=0;i<smallOutput;i++){
    output[i+smallOutput]=input[0]+output[i];
 }
  return smallOutput*2;
}
int main(){

string s="abc";
string *newoutput=new string[100];
int count=returnSubsequences(s,newoutput);
for(int i=0;i<count;i++){
    cout<<newoutput[i]<<endl;
 }
}
