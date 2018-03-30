#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

 int lengthString(char input[]){

    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
  return count;
 }
 void stringCopy(char input[],char destination[]){

  int i = 0;
  while (input[i] != '\0') {
    destination[i] = input[i];
    i++;
  }
  destination[i] = '\0';
 }
  int stringCompare(char input1[],char input2[]){

  int i = 0;
   while (input1[i] == input2[i]) {
      if (input1[i] == '\0' || input2[i] == '\0')
         break;
      i++;
   }

   if (input1[i] == '\0' && input2[i] == '\0')
      return 0;
   else
      return -1;
 }
 void printstring(int start,int end,char str[]){
   for(int i=start;i<=end;i++)
     cout<<str[i];
   cout<<endl;
 }
void printSubstrings(char str[]){
  for(int start=0;start<lengthString(str);start++){
    for(int end=start;end<lengthString(str);end++){
      printstring(start,end,str);
    }
  }
}
int main(){

  int choice;
  char input[1000],input2[1000];
  cout<<"Enter the string:";
  cin.getline(input,1000);
  cout<<"1: PrintSubstrings"<<endl<<"2: Length of String"<<endl<<"3: String Copy"<<endl<<"4: String Compare"<<endl;
  cout<<"Enter the choice:";
  cin>>choice;

  while(choice!=0){
  switch(choice){
   case 0:{
   exit(0);
   break;
   }
   case 1: printSubstrings(input);
   break;
   case 2:{
       int length=lengthString(input);
       cout<<length;
       break;
   }
   case 3:{
    char *destination=new char[lengthString(input)+1];
    stringCopy(input,destination);
    for(int i=0;i<lengthString(destination);i++){
        cout<<destination[i];
    }
    break;
   }
   case 4:{
   cout<<"Enter the 2nd string:";
   fflush(stdin);
   cin.getline(input2,1000);
   int ans=stringCompare(input,input2);
   if(ans==0)
    cout<<"The strings are Equal";
   else
    cout<<"The string are not Equal";
   break;
   }
  }
  cout<<endl;
  fflush(stdin);
  cout<<"Enter the string:";
  cin.getline(input,1000);
  cout<<"1: PrintSubstrings"<<endl<<"2: Length of String"<<endl<<"3: String Copy"<<endl<<"4: String Compare"<<endl;
  cout<<"Enter the choice:";
  cin>>choice;
 }
}



