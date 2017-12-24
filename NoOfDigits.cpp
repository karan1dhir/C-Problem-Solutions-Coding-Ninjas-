#include<iostream>
using namespace std;


int NoOfDigits(int n){

if(n==0)
 return 0;

 int digits=NoOfDigits(n/10);
 return 1+digits;

}
int main(){


int n;
cout<<"enter the no:";
cin>>n;
int digits=NoOfDigits(n);
cout<<digits;

}
