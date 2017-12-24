#include<iostream>
using namespace std;

int sumOfNumbers(int n){

if(n<=1)
    return 0;

int sum=sumOfNumbers(n-1);
return n+sum;
}
int main(){

int n;
cout<<"enter the Number n:";
cin>>n;
int sum=sumOfNumbers(n);
cout<<sum;
}
