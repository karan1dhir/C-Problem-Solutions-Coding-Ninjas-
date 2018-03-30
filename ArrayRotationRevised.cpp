#include<iostream>
using namespace std;
int main(){

int arr[5]={1,2,3,4,5};
int d=2;
int size=5;
 int temp;

  for(int j=0;j<d;j++){
    temp=arr[j];
    int i;
   for(i=0;i<size-1;i++){
     arr[i]=arr[i+1];
   }
  arr[i]=temp;
  }
   for(int i=0;i<size;i++){
    cout<<arr[i];
   }
}
