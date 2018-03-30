#include<iostream>
#include<cstring>
using namespace std;

//35
//TheQuickBrownFoxJumpsOverTheLazyDog
void ans (int n, string S)
{
    // Write your code here
  int *newarr=new int[200];
  int flag=0;
  for(int i=0;i<n;i++){
    if(S[i]>=65 && S[i]<=90){
      newarr[S[i]]++;
    }
    else
      newarr[S[i]+('A'-'a')]++;
  }
  for(int i=65;i<=90;i++)
    cout<<newarr[i];

  for(int i=65;i<=90;i++){
    if(newarr[i]==0){
      flag=1;
      break;
    }
  }
  if(flag==0)
    cout<<"YES";
  else
    cout<<"NO";
}
int main(){

  char input[1000];
  cin>>input;
  int n=strlen(input);
  ans(n,input);
}
