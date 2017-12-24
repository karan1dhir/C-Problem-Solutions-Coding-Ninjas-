#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n;
    int flag=0;
    int temp=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){

            if(arr[j]>arr[j+1]){

                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];

    for(int i=0;i<n;i++){
        if(!(arr[i]<arr[i+1])){
        flag=1;
        break;
        }
    }
    if(flag==0)
    cout<<"YES";
    else
    cout<<"NO";
}



