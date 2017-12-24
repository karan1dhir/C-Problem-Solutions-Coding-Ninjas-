#include<iostream>
using namespace std;

bool checkNoInArray(int input[],int size){
int main(){

int input[],size,number;
cout<<"enter array size:";
cin>>size;
cout<<"enter the array elements:";
for(int i=0;i<size;i++)
    cin>>input[i];


bool b=checkNoInArray(input,size);
cout<<b;
}
