#include<iostream>
#include<cstring>
using namespace std;
void permutationCheck(char input1[],char input2[]){


    int freq[256];
    for(int i=0;i<256;i++)
    freq[i]=0;

    int flag=0;
    for(int i=0;i<strlen(input1);i++){

        int index=input1[i];
        freq[index];
    }
    for(int j=0;j<strlen(input1);j++){

        int index=input2[j];
        freq[index]--;
    }

    for(int i=0;i<256;i++){
        if(freq[i]!=0){
        flag=1;
        break;
        }
    }
    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main(){

 int n;
 char input1[10000],input2[10000];
 cin>>n;

 for(int i=0;i<n;i++){
 cin.getline(input1,10000);
 cin.getline(input2,10000);
 permutationCheck(input1,input2);
 }
}
