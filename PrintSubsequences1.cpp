#include<iostream>
#include<cstring>
using namespace std;

void printSubsequences(char *input,char *output)
{

    if(input[0]=='\0')
    {
        cout<<output<<endl;
        return;
    }
    printSubsequences(input+1,output);

    char *newoutput=new char[strlen(output)+2];

    int i;
    for(i=0; output[i]!='\0'; i++){
        newoutput[i]=output[i];}

    newoutput[i]=input[0];
    newoutput[i+1]='\0';

    printSubsequences(input+1,newoutput);
}
int main()
{

    char input[]="abc";
    char output[100]= {'\0'};
    printSubsequences(input,output);
}
