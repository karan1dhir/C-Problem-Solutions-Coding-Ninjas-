#include<iostream>
using namespace std;
void merge(int input1[],int input2[],int size1,int size2,int ans[]){


  int i=0,j=0,k=0;
  while(i<size1 && j<size2){

     if(input1[i]>=input2[j]){

       ans[k]=input2[j];
       j++;
       k++;
     }
    else if(input1[i]<input2[j]){

      ans[k]=input1[i];
      k++;
      i++;
    }
  }
   if(i<size1){
    while(i<size1){

       ans[k]=input1[i];
       k++;
       i++;
    }
   }
   if(j<size2){
   while(j<size2){

     ans[k]=input2[j];
     k++;
     j++;
    }
   }
}
 void mergeSort(int input1[],int size){


    int h1[1000],h2[1000];

    if(size==1)
        return;

    for(int i=0; i<size/2; i++)
        h1[i]=input1[i];

    for(int k=size/2,j=0; k<size; k++,j++)
        h2[j]=input1[k];

    mergeSort(h1,size/2);
    mergeSort(h2,size-size/2);
    merge(h1,h2,size/2,size-size/2,input1);
}
int main(){

   int input1[5]={9,8,7,6,5};
   int size1=5;

   mergeSort(input1,size1);

  for(int i=0;i<size1;i++)
    cout<<input1[i];

}

