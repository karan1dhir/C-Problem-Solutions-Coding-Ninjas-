#include<iostream>
#include<cstring>
using namespace std;
int getPermutations(char input[],char output[][50]){

  if(input[0]=='\0'){
     output[0][0]='\0';
     return 1;
  }
  int answer;
  for(int i=0;i<strlen(input);i++){
   int k=0;
   char newinput[100];
    for(int j=0;j<strlen(input);j++){

        if(j!=i){

          newinput[k]=input[j];
          k++;
        }
    }
   newinput[k]='\0';
   char newoutput[1000][50];
   answer=getPermutations(newinput,newoutput);

    for(int z=0;z<answer;z++){

        output[z+answer*i][0]=input[i];
        int l;
        for(l=0;newoutput[z][l]!='\0';l++){

            output[z+answer*i][l+1]=newoutput[z][l];
        }
        output[z+answer*i][l+1]='\0';
    }
  }
  return answer*strlen(input);
 }
int main(){

cout<<"Enter the string :";
char input[100],output[1000][50];
cin.getline(input,100);
int result=getPermutations(input,output);

for(int i=0;i<result;i++){

    for(int j=0;output[i][j]!='\0';j++){

        cout<<output[i][j];
    }
    cout<<endl;
 }
}
