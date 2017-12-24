#include<iostream>
using namespace std;

int maxInArray(int input[],int size){

if(size==1)
   return input[0];

int max=maxInArray(input,size-1);
if(input[size-1]>max)
   return input[size-1];
else
   return max;
}
int main(){

int arr[1000],n;

cout<<"enter the array size:";
cin>>n;
cout<<"enter the Array Elements:";
for(int i=0;i<n;i++)
    cin>>arr[i];

int result=maxInArray(arr,n);
cout<<result;
}
