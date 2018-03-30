#include<iostream>
using namespace std;

int fibbo(int  n)
{
    if(n<=1)
        return 1;

    int a=fibbo(n-1);
    int b=fibbo(n-2);
    return a+b;
}
 int fibbo_dp(int n){

   int *newans=new int[n+1];
   newans[0]=0;
   newans[1]=1;

   for(int i=2;i<=n;i++){
    newans[i]=newans[i-1]+newans[i-2];
   }
  return newans[n];
}
int fibbo_better(int n,int *arr)
{
    if(n<=1)
    {
        arr[n]=n;
        return n;
    }
    if(arr[n-1]==0)
    {
        arr[n-1]=fibbo_better(n-1,arr);

    }
    if(arr[n-2]==0)
    {
         arr[n-2]=fibbo_better(n-2,arr);
    }
    arr[n]=arr[n-1]+arr[n-2];
    return arr[n];
}
int fibbo1(int n)
{
    int *newans=new int[n+1];
    for(int i=0; i<=n; i++)
    {
        newans[i]=0;
    }
    return fibbo_better(n,newans);
}
int main()
{
    int n=6;
    cout<<fibbo_dp(n);
}
