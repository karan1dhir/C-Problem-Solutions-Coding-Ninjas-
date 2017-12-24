#include<iostream>
using namespace std;
/*void arrfreq(int arr[],int size){

int count=0;

for(int i=0;i<size;i++){
    count=1;
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
            arr[j]='*';
        }
    }
    if(arr[i]!='*')
    cout<<arr[i]<<" "<<count<<endl;
  }
}*/
void arrfreq(int arr[],int size)
{

    int count=0,k=0;
    int *newarr=new int[1000];
    for(int i=0; i<size; i++)
    {
        count=1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]='*';
            }
        }
        if(arr[i]!='*'){
        newarr[k]=count;
        k++;
       }
    }
    for(int i=0; i<k; i++)
    cout<<newarr[i]<<endl;
}
int main()
{

    int arr[]= {1,2,1,2,1,2,3,3,3,4};
    int size=(sizeof(arr))/sizeof(arr[0]);
    arrfreq(arr,size);
}
