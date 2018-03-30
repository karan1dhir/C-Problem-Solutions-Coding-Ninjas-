#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the size:";
cin>>n;
cout<<"Enter the numbers:";
int *arr=new int[n];
int current;
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=1;i<n;i++){
    int j;
    current=arr[i];
    for(j=i-1;j>=0;j--){
        if(current<arr[j]){
            arr[j+1]=arr[j];
        }
        else
            break;
    }
     arr[j+1]=current;
}
for(int i=0;i<n;i++)
    cout<<arr[i];

}

