#include<iostream>
#include<climits>
using namespace std;

 int minStepsBetterHelper(int n,int *ans){

  if(n==1){
    ans[n]=0;
    return 0;
  }
  if(ans[n-1]==-1){
  ans[n-1]=minStepsBetterHelper(n-1,ans);
  }
  int z=INT_MAX,y=INT_MAX;
  if(n%2==0){
    if(ans[n/2]==-1){
    ans[n/2]=minStepsBetterHelper(n/2,ans);
    }
    y=ans[n/2];
  }
   if(n%3==0){
    if(ans[n/3]==-1){
    ans[n/3]=minStepsBetterHelper(n/3,ans);
    }
    z=ans[n/3];
  }
  ans[n]=min(ans[n-1],min(y,z))+1;
  return ans[n];
}
 int minSteps(int n){

  int *newans=new int[n+1];
  for(int i=0;i<=n;i++)
    newans[i]=-1;

  return minStepsBetterHelper(n,newans);
 }


 int minStepsdp(int n){


   int *newans=new int[n+1];
   newans[1]=0;
   newans[2]=1;





 }

int main(){

  int n=9;
  cout<<minSteps(n);
}
