#include<iostream>
using namespace std;

 void printSolution(int solution[][3],int n){

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cout<<solution[i][j]<<" ";
  }
  cout<<endl;
 }
void ratInMazeHelper(int rat[][3],int n,int solution[][3],int x,int y){


 if(x==n-1 && y==n-1){
    solution[x][y]=1;
    printSolution(solution,n);
    return;
 }

  if(x>=n || x<0 || y>=n || y<0 || rat[x][y]==0 || solution[x][y]==1)
    return;


 solution[x][y]=1;
 ratInMazeHelper(rat,n,solution,x-1,y);
 ratInMazeHelper(rat,n,solution,x+1,y);
 ratInMazeHelper(rat,n,solution,x,y-1);
 ratInMazeHelper(rat,n,solution,x,y+1);
 solution[x][y]=0;

}
 void ratInMaze(int rat[][3],int n){

   int temp[3][3];
   ratInMazeHelper(rat,n,temp,0,0);
 }

int main(){

  int rat[3][3]={{1,1,0},{1,1,1},{1,1,1}};
  ratInMaze(rat,3);
}
