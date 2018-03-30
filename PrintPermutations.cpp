#include<iostream>
#include<cstring>
using namespace std;

void printPermutations(char input[], char output[]){

  if(input[0]=='\0'){
    cout<<output<<endl;
    return;
  }
 char newinput[100];
 for(int i=0;i<strlen(input);i++){


    int k = 0;
    for(int j = 0; j < i; j++)
    newinput[k++] = input[j];

    for(int j = i+1; input[j] != '\0'; j++)
    newinput[k++] = input[j];

    newinput[k++]='\0';

  char *newoutput=new char[strlen(output)+2];

  int l;
  for(l=0;newoutput[l]!='\0';l++)
    newoutput[l]=output[l];

  newoutput[l]=input[i];
  newoutput[l+1]='\0';

  printPermutations(newinput,newoutput);
 }
}
int main(){
char input[100],output[100];
cin.get(input,100);
printPermutations(input,output);
}

