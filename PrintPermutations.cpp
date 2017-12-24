#include<iostream>
#include<cstring>
using namespace std;

void printPermutations(char input[], char output[]){

 if(input[0]=='\0'){

    for(int i=0;i<strlen(output);i++)
        cout<<output[i];
        cout<<endl;
    return;
 }


}

int main(){
char input[100],output[100];
cin.get(input,100);
printPermutations(input,output);
}
