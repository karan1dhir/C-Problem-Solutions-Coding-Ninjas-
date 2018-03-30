#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter the size:";
 cin>>n;
 cout<<"Enter the numbers:";
 int *arr=new int[n];
 for(int i=0;i<n;i++)
    cin>>arr[i];
 int end=n-1,min=0,index=0,temp;
 for(int start=0; start<=end;start++){

     min=arr[start];
     index=start;
     for(int j=start+1;j<=end;j++){

        if(min>arr[j]){
            min=arr[j];
            index=j;
        }
     }
     arr[index]=arr[start];
     arr[start]=min;
  }
 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
