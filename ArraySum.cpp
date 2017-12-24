#include<iostream>
using namespace std;

int sumOfArray(int input[],int size){

if(size==0)
    return 0;

int sum=sumOfArray(input,size-1);
return sum+input[size-1];

}
int main(){

int input[1000];
int size;
cout<<"enter array size:";
cin>>size;
cout<<"Enter array elements:";
for(int i=0;i<size;i++)
    cin>>input[i];

int sum=sumOfArray(input,size);
cout<<sum;

}
