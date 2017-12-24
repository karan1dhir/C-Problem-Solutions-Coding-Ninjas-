#include<iostream>
using namespace std;


int PowerOfNo(int base,int power){

  if(power==0)
    return 1;


 int number=PowerOfNo(base,power-1);
 return base*number;
}

int main(){

int a,b;
cout<<"enter a and b";
cin>>a>>b;
int digit=PowerOfNo(a,b);
cout<<digit;
}
