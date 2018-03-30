#include<iostream>
#include<queue>
using namespace std;
void printBFS(int **edges,int v,int sv,bool *visited){

   queue<int> pendingNodes;
   pendingNodes.push(sv);
   visited[sv]=true;

   while(pendingNodes.size()!=0){

    int front=pendingNodes.front();
    cout<<front<<" ";
    pendingNodes.pop();
    for(int i=0;i<v;i++){
      if(front==i){
        continue;
      }
      if(edges[front][i]==1 && visited[i]!=true){
        pendingNodes.push(i);
        visited[i]=true;
      }
     }
   }
 }
void print(int **edges,int v,int sv,bool *visited)
{

    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0; i<v; i++)
    {
        if(i==sv)
            continue;

        if(edges[sv][i]==1)
        {
            if(visited[i]==true)
            {
                continue;
            }
            print(edges,v,i,visited);
        }
    }
}
int main()
{

    int v;
    int e;
    cin>>v>>e;
    int sv=0;
    int **edges=new int*[v];
    for(int i=0; i<v; i++)
    {
        edges[i]=new int[v];
        for(int j=0; j<v; j++)
            edges[i][j]=0;
    }
    bool *visited=new bool[v];
    for(int i=0; i<v; i++)
        visited[i]=false;

    for(int i=0; i<e; i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    printBFS(edges,v,sv,visited);
}
