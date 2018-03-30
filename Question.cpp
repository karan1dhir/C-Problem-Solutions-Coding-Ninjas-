#include<iostream>
#include<climits>
using namespace std;
int minsumHelper(int input[][3],int n,int row){

   int min=input[row][0],index=0;
   for(int i=1;i<n;i++){
     if(input[row][i]<min){
       min=input[row][i];
       index=i;
       cout<<index<<endl;
     }
   }
  if(row<n)
  input[row+1][index]=INT_MAX;
 return min;
}

int minSum(int input[][3], int n) {
	// Write your code here
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=minsumHelper(input,n,i);
   }
  return sum;
  }
  int main(){

  int input[4][3]={{1,2,3},{4,5,6},{7,8,9},{1,2,3}};
  int n=4;
  int sum=minSum(input,n);
  cout<<sum;
  /*for(int i=0;i<4;i++){
    for(int j=0;j<3;j++)
        cout<<input[i][j]<<" ";
        cout<<endl;
  }*/
}
