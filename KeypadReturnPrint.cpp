#include<iostream>
#include<cstring>
using namespace std;
void alpha(int digit,char str[]){
if(digit==2)
strcpy(str,"abc");
else if(digit==3)
strcpy(str,"def");
else if(digit==4)
strcpy(str,"ghi");
else if(digit==5)
strcpy(str,"jkl");
else if(digit==6)
strcpy(str,"mno");
else if(digit==7)
strcpy(str,"pqrs");
else if(digit==8)
strcpy(str,"tuv");
else if(digit==9)
strcpy(str,"wxyz");
}
void printkeypad(int digit,char *output){

 if(digit==0){
    cout<<output<<endl;
    return;
 }
 char str[10];
 alpha(digit%10,str);

 for(int i=0;i<strlen(str);i++){

    char *newoutput=new char[strlen(output)+2];
    newoutput[0]=str[i];
    int j;
    for(j=0;output[j]!='\0';j++)
        newoutput[j+1]=output[j];

    newoutput[j+1]='\0';
    printkeypad(digit/10,newoutput);
 }
}
int main(){

 int digit;
 cin>>digit;
 char output[10]={'\0'};
 printkeypad(digit,output);
}
