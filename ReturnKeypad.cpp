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
int keypad(int num,char output[][100]){

   if(num==0){
    output[0][0]='\0';
    return 1;
 }
 char temp[100];
 int lastdigit=num%10;
 alpha(lastdigit,temp);
 char newoutput[100][100];
 int a=keypad(num/10,newoutput);

 for(int i=0;i<strlen(temp);i++){

    for(int j=0;j<a;j++){

        int l;
        for(l=0;newoutput[j][l]!='\0';l++){
            output[i*a+j][l]=newoutput[j][l];
        }
    output[i*a+j][l]=temp[i];
    output[i*a+j][l+1]='\0';
    }
 }
  return strlen(temp)*a;
}
int main(){

 int num;
 char output[100][100];
 cout<<"Enter the number:";
 cin>>num;
 int len=keypad(num,output);

 for(int i=0;i<len;i++){

    for(int j=0;output[i][j]!='\0';j++)
        cout<<output[i][j];
    cout<<endl;
 }
}
