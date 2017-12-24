#include<iostream>
using namespace std;

int Subsequences(string input,string output[]){

if(input.size()==0){
    output[0]="";
    return 1;
}
string smallString=input.substr(1);
int smallOutput=Subsequences(smallString,output);

for(int i=0;i<smallOutput;i++){

    output[i+smallOutput]=input[0]+output[i];
}
return smallOutput*2;
}

int main(){

string input;
cout<<"Enter the string:";
cin>>input;
string *output=new string[100];
int count=Subsequences(input,output);
for(int i=0;i<count;i++)
    cout<<output[i]<<endl;
}
