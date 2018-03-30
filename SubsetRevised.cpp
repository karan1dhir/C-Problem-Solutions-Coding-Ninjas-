#include<iostream>
using namespace std;

int subSets(int input[],int size,int output[][100]){

if(size==0){
    output[0][0]=0;
    return 1;
}

int smallOutput=subSets(input+1,size-1,output);

for(int i=0;i<smallOutput;i++){

    output[i+smallOutput][0]=output[i][0]+1;
    output[i+smallOutput][1]=input[0];

    for(int j=0;j<output[i][0];j++){
        output[i+smallOutput][j+2]=output[i][j+1];
    }
 }
  return smallOutput*2;
}
int main(){

int arr[10]={1,2,3};
int output[100][100];
int size=3;
int count=subSets(arr,size,output);

   for(int i=0;i<count;i++){
    for(int j=0;j<output[i][0];j++){
        cout<<output[i][j+1]<<" ";
    }
    cout<<endl;
 }
}





