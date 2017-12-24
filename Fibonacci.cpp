#include<iostream>
using namespace std;

int fibbo(int n){

if(n<=0)
    return 0;
if(n==1)
    return 1;

int smallOutput1=fibbo(n-1);
int smallOutput2=fibbo(n-2);
return smallOutput1+smallOutput2;
}
int main(){

cout<<fibbo(3);
}
