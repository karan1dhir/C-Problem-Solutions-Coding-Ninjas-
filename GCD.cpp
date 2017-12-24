#include<iostream>
#include<cmath>
using namespace std;


int gcd(int n1,int n2){

 int hcf;
 int temp=min(n1,n2);

 for(int i=1;i<=temp;i++){
  if(n1%i==0 && n2%i==0)
    hcf=i;
 }
 return hcf;
}
int main(){

int a[100]={98,56};
int result=a[0];

 for(int i=1;i<5;i++){

 result=gcd(result,a[i]);
 }
cout<<result;
}
