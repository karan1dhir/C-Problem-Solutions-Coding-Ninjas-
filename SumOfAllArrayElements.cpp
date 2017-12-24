#include<iostream>
using namespace std;

int sumofArray(int input[],int size){

if(size==1)
   return input[0];

int sum=sumofArray(input,size-1);
return sum+input[size-1];
}
int main(){

int input[5]={1,2,3,4,5};
int size=5;
int result=sumofArray(input,size);
cout<<result;

}

