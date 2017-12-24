#include<iostream>
#include<cstring>
using namespace std;

void trimspaces(char *input){

 if(input[0]=='\0')
    return;

 if(input[0]==' '){

    for(int i=0;i<=strlen(input);i++){
        input[i]=input[i+1];
    }
    trimspaces(input);
 }
 else{
    trimspaces(input+1);
 }
}
int main(){

char input[1000];
cin.get(input,1000);
trimspaces(input);
cout<<input;
}
