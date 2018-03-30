#include<iostream>

using namespace std;
#include "QueueArray.h"

int main(){

queueArray<int> queueArray(5);
queueArray.enqueue(10);
queueArray.enqueue(20);
queueArray.enqueue(30);
queueArray.enqueue(40);
queueArray.enqueue(50);
queueArray.enqueue(60);

 cout<<queueArray.front()<<endl;
 cout<<queueArray.deque()<<endl;
 cout<<queueArray.deque()<<endl;
 cout<<queueArray.deque()<<endl;

 cout<<queueArray.getSize()<<endl;
 cout<<queueArray.isEmpty()<<endl;
}
