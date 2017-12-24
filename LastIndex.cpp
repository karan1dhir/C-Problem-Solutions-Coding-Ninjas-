#include<iostream>
using namespace std;

int LastIndex(int input[],int size,int x){

if(size==0)
    return -1;

int index=LastIndex(input+1,size-1,x);




}
int  main(){

int input[]={9,8,6,5,6,1};
int size=6;
int x=6;
int index=LastIndex(input,size,x);
cout<<index;
}
