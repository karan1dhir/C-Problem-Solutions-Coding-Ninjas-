#include<iostream>
using namespace std;


int SumOFDigits(int n){

if(n==0)
    return 0;

int sumofNo=SumOFDigits(n-1);
return sumofNo+n;

}

int main(){

int n;
cout<<"enter the number";
cin>>n;
int sum=SumOFDigits(n);
cout<<sum;

}


