#include<iostream>
using namespace std;


int binarySearchHelper(int input[],int element,int start,int end){

 if(start>=end)
    return -1;


 int mid=(start+end)/2;

 if(input[mid]==element)
    return mid;

 else if(input[mid]>element){
    int answer=binarySearchHelper(input,element,start,mid-1);
    return answer;
 }
 else if(input[mid]<element){
    int answer=binarySearchHelper(input,element,mid+1,end);
    return answer;
 }
}

int binarySearch(int input[],int size,int element){

 int start=0;
 int end=size-1;
 return binarySearchHelper(input,element,start,end);
}
int main(){

 int size,element;
 int arr[10000];
 cout<<"Enter the size:";
 cin>>size;
 cout<<"Enter the element:";
 cin>>element;
 cout<<"Enter array elements:";
 for(int i=0;i<size;i++)
   cin>>arr[i];

 int result=binarySearch(arr,size,element);
 cout<<result;
}
