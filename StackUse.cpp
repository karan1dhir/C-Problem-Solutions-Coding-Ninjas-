#include<climits>
template<typename T>
class StackUse
{
    T *data;
    int nextIndex;
    int capacity;
public:
    StackUse()
    {
        data=new T[4];
        nextIndex=0;
        capacity=4;
    }
    int sizeOfArray()
    {
        return nextIndex;
    }
    int isEmpty()
    {
        return nextIndex==0;
    }
    void push(T element){
    if(nextIndex==capacity){

        T *newdata=new T[2*capacity];
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;
        delete []data;
        data=newdata;
    }
     data[nextIndex]=element;
     nextIndex++;
    }
    T pop(){
        if(isEmpty()){
            cout<<"Stack is Empty!";
            return 0;
        }
    nextIndex--;
    return data[nextIndex];
    }
    T top(){
    if(isEmpty()){
        cout<<"Stack is Empty";
        return 0;
    }
    return data[nextIndex-1];
    }
};
