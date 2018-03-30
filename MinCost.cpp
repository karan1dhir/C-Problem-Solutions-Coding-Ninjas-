#include<iostream>
#include<climits>
using namespace std;

 int minCostPath_Better(int arr[3][3],int m,int n,int i,int j,int ans[3][3]) {


    if(i==m-1 && j==n-1)
        return arr[m-1][n-1];

   if(i>=m || j>=n)
    return INT_MAX;


   if(ans[i][j]!=-1){
    return ans[i][j];
   }
   int x=minCostPath_Better(arr,m,n,i+1,j,ans);
   if(x!=INT_MAX){
    ans[i+1][j]=x;
   }
   int y=minCostPath_Better(arr,m,n,i,j+1,ans);
   if(y!=INT_MAX){
    ans[i][j+1]=y;
   }
   int z=minCostPath_Better(arr,m,n,i+1,j+1,ans);
    if(z!=INT_MAX){
        ans[i+1][j+1]=z;
    }
   ans[i][j]=min(x,min(y,z))+arr[i][j];
   return ans[i][j];
 }
 int minCost(int arr[3][3],int m,int n,int i,int j){

    if(i==m-1 && j==n-1)
        return arr[m-1][n-1];

   if(i>=m || j>=n)
    return INT_MAX;


   int x=minCost(arr,m-1,n-1,i+1,j);
   int y=minCost(arr,m-1,n-1,i+1,j+1);
   int z=minCost(arr,m-1,n-1,i,j+1);

   return arr[i][j]+min(x,min(y,z));

 }

int main(){


 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int size=3;
 int ans[3][3];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        ans[i][j]=-1;
    }
 }

 int cost=minCostPath_Better(arr,3,3,0,0,ans);
 cout<<cost;
}
