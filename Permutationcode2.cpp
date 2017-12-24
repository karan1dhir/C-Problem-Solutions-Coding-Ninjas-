#include<iostream>
using namespace std;

int getPermutations(char input[],char output[][50]){

if(input[0]=='\0'){
    output[0][0]='\0';
    return 1;
}

   int answer;
   int k=0;
   for(int i=1;i<strlen(input);i++){

       newoutput[k]=input[i];
       k++;
   }
    newinput[k]='\0';
    char newoutput[1000][50]
    answer=getPermutations(newinput,newoutput);





}
int main(){

char input[100],output[][50];
cin.get(name,100);

int result=getPermutations(name,output);
cout<<result;
}
