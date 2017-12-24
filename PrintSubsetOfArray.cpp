#include<iostream>
#include<cstring>
using namespace std;

void printSubsets(int input[],int n,int output[],int m)
{
    if(n==0)
    {
        for(int i=0; i<m; i++)
        cout<<output[i]<<" ";
        cout<<endl;
        return;
    }
    printSubsets(input+1,n-1,output,m);

    int *newarray=new int[m+1];

    int i;
    for(i=0; i<m; i++)
        newarray[i]=output[i];

    newarray[i]=input[0];
    printSubsets(input+1,n-1,newarray,m+1);

}
int main()
{
    int input[3]= {1,2,3};
    int n=3;
    int output[100]= {0};
    int m=0;
    printSubsets(input,n,output,m);

}
