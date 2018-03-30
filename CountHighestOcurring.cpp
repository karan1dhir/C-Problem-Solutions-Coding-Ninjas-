#include<iostream>
#include<cstring>
using namespace std;

char highestOccurringChar(char input[]) {

  int *arr=new int[256];
  int count=0;
  for(int i=0;i<256;i++)
    arr[i]=0;

  for(int i=0;i<strlen(input);i++){
   arr[input[i]]++;
  }
  for(int i=65;i<=122;i++)
    cout<<arr[i];

  char answer;
  for(int i=65;i<=122;i++){
    if(count<arr[i]){
      count=arr[i];
      answer=(char)i;
    }
  }
 return answer;
}

int main(){

 int n;
 char arr[1000];
 cin>>arr;
 char c=highestOccurringChar(arr);
 cout<<c;
}
