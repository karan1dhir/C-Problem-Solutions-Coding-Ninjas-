#include<vector>
class Priorityqueue
{

    vector<int> pq;
public:
    Priorityqueue()
    {

    }

    bool isEmpty()
    {
        return (pq.size()==0);
    }
    int getSize()
    {
        return pq.size();
    }
    int getMin()
    {
        if(pq.size()==0)
        {
            return 0;
        }
        return pq[0];
    }
    void insert(int element)
    {

        pq.push_back(element);
        int childIndex=pq.size()-1;
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
    int remove(){

     if(isEmpty()){
        return 0;
     }

     int ans=pq[0];
     pq[0]=pq[pq.size()-1];
     pq.pop_back();

     int parentIndex=0;
     int leftChildIndex=2*parentIndex+1;
     int rightChildIndex=2*parentIndex+2;

     while(leftChildIndex<pq.size()){
     int minIndex=parentIndex;
     if(pq[minIndex]>pq[leftChildIndex]){

        minIndex=leftChildIndex;
     }
    if(rightChildIndex<pq.size() && pq[minIndex]>pq[rightChildIndex]){
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
   return ans;
 }
};
