#include<iostream>
using namespace std;

int subSets(int input[],int output[][50],int n){

 if(n==0){
    output[0][0]=0;
    return 1;
 }

 int answer=subSets(input+1,output,n-1);

 for(int i=0;i<answer;i++){

    output[i+answer][0]=output[i][0]+1;
    output[i+answer][1]=input[0];

    for(int j=0;j<output[i][0];j++){

        output[i+answer][j+2]=output[i][j+1];
    }
 }
 return answer*2;
}
int main(){

int input[4]={1,2,3};
int output[100][50];

int index=subSets(input,output,3);
cout<<index;

for(int i=0;i<index;i++){

    for(int j=0;j<output[i][0];j++){

        cout<<output[i][j+1]<<" ";
    }
    cout<<endl;
 }
}
