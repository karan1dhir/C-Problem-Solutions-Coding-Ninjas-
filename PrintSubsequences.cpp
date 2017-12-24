#include<iostream>
using namespace std;

int Subsequences(char input[],char output[][50])
{

    if(input[0]=='\0')
    {
        output[0][0]='\0';
        return 1;
    }

    int smallAns=Subsequences(input+1,output);

    for(int i=0; i<smallAns; i++)
    {
        output[smallAns+i][0]=input[0];
        int j;
        for( j=0; output[i][j]!='\0'; j++)
        {
            output[smallAns+i][j+1]=output[i][j];
        }
        output[smallAns+i][j+1]='\0';
    }
    return smallAns*2;
}
int main()
{

    char input[100]="abc";
    char output[100][50]= {'\0'};
    int count=Subsequences(input,output);
    for(int i=0; i<count; i++)
    {
        for(int j=0; output[i][j]!='\0'; j++)
            cout<<output[i][j];
         cout<<endl;
    }

}
