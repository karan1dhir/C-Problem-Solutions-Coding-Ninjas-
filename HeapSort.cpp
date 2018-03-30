#include<iostream>


void inPlaceHeapSort(int pq[],int n){


  int childIndex,parentIndex;
  for(int i=1;i<n;i++){
     childIndex=i;
    while(childIndex>0){
        int parentIndex=(childIndex-1)/2;

        if(pq[childIndex]<pq[parentIndex])
        {
            int temp=pq[parentIndex];
            pq[parentIndex]=pq[childIndex];
            pq[childIndex]=temp;
        }
        else{
            break;
        }
        childIndex=parentIndex;
      }
  }
  int size=n;

  while(size>1){
  int temp=pq[0];
  pq[0]=pq[n-1];
  pq[n-1]=temp;

  size--;

     int parentIndex=0;
     int leftChildIndex=2*parentIndex+1;
     int rightChildIndex=2*parentIndex+2;

     while(leftChildIndex<size){
     int minIndex=parentIndex;
     if(pq[minIndex]>pq[leftChildIndex]){

        minIndex=leftChildIndex;
     }
    if(rightChildIndex<size && pq[minIndex]>pq[rightChildIndex]){
        minIndex=rightChildIndex;
     }
    if(minIndex == parentIndex) {
       break;
    }

     int temp=pq[parentIndex];
     pq[parentIndex]=pq[minIndex];
     pq[minIndex]=temp;

     int parentIndex=minIndex;
     int leftChildIndex=2*parentIndex+1;
     int rightChildIndex=2*parentIndex+2;
   }
  }
 }
