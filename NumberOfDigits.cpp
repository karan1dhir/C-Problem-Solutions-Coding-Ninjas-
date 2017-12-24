#include<iostream>
using namespace std;

int noOfDigits(int n){

if(n<=0)
    return 0;

int count=noOfDigits(n/10);
return 1+count;
}
int main(){

int n;
cout<<"enter the number:";
cin>>n;
int count=noOfDigits(n);
cout<<count;
}
