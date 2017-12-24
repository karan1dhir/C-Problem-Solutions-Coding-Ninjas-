#include<iostream>
using namespace std;

int power(int b,int e){

if(e==0)
    return 1;

int smallAns=power(b,e-1);
return b*smallAns;

}
int main(){

int b,e;
cout<<"Enter the base:";
cin>>b;
cout<<"Enter the exponent:";
cin>>e;
int value=power(b,e);
cout<<value;

}
